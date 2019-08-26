#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool option(int a, int b)
{
    return a < b;
}
int main()
{
    freopen("c.inp", "r", stdin);
    freopen("c.out", "w", stdout);
    long long n, m, k;
    vector<long long> a;
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++)
    {
        long long x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end(), option);
    long long dem = 0;
    long long ans = 0;
    long long temp = k;
    k = 0;
    while (!a.empty())
    {
        ans++;
        vector<long long>::iterator up_value;
        k = k + dem;
        if (k < a[0] - temp)
        {
            k = k+temp*((a[0]-k)/temp);
        }
        up_value = upper_bound(a.begin(), a.end(), k + temp); //tim can duoi >=
        long long index = up_value - a.begin();
        dem = index;
        a.erase(a.begin(), a.begin() + index);
    }
    cout << ans;
}