#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool option(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
int main()
{
    freopen("b.inp", "r", stdin);
    freopen("b.out", "w", stdout);
    int s, c, x, y;
    vector<int> a;
    vector<pair<int, int>> b;
    vector<long long> d(100005, 0);
    vector<long long> k;
    ;
    cin >> s >> c;
    for (int i = 0; i < s; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < c; i++)
    {
        cin >> x >> y;
        b.push_back({x, y});
    }
    sort(b.begin(), b.end(), option);
    d[0] = b[0].second;
    for (int i = 1; i < c; i++)
    {
        d[i] = d[i - 1] + b[i].second;
    }
    for (int i = 0; i < c; i++)
    {
        k.push_back(b[i].first);
    }
    for (int i = 0; i < s; i++)
    {
        vector<long long>::iterator up_value;
        up_value = upper_bound(k.begin(), k.end(), a[i]); //tim can duoi >=
        int index = up_value - k.begin();
        //cout << index << endl;
        if (index == 0)
        {
            cout << 0 << " ";
        }
        else
            cout << d[index - 1] << " ";
    }
}