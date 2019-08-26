#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    long long n;
    long long x;
    vector<long long> a;
    map<long long, long long> d, d1;
    cin >> n;
    long long l = -1, r = -1, r1 = n, l1 = n;
    for (long long i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for (long long i = 0; i < n; i++)
    {
        d[a[i]]++;
        if (d[a[i]] > 1)
        {
            l = i;
            break;
        }
    }
    for (long long i = n - 1; i >= 0; i--)
    {
        if (d[a[i]] >= 1)
        {
            r = i;
            break;
        }
        d[a[i]]++;
    }
    for (long long i = n - 1; i >= 0; i--)
    {
        d1[a[i]]++;
        if (d1[a[i]] > 1)
        {
            r1 = i;
            break;
        }
    }
    for (long long i = 0; i < n; i++)
    {
        if (d1[a[i]] >= 1)
        {
            l1 = i;
            break;
        }
        d1[a[i]]++;
    }
    if (l == -1)
        cout << 0;
    else
    {
        cout << min(r - l + 1, r1 - l1 + 1);
    }
}