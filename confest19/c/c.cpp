#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int n;
    int x;
    vector<int> a;
    map<int, int> d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    int ans = 99999999;
    for (int i = 0; i < n; i++)
    {
        bool prefixvalid = true;

        for (int j = 0; j < i; j++)
        {
            d[a[j]]++;
            if (d[a[j]] == 2)
            {
                prefixvalid = false;
                break;
            }
        }
        int max_j = n;
        for (int j = n - 1; j >= i; j--)
        {
            d[a[j]]++;
            if (d[a[j]] == 1)
            {
                max_j = j;
            }
            else
                break;
        }
        if (prefixvalid)
            ans = min(ans, max_j - i);
            d.clear();
    }
    cout << ans;
}