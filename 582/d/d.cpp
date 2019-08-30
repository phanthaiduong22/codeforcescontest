#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <map>

using namespace std;
pair<int, int> d[200005];
int main()
{
    ios::sync_with_stdio(false);
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    long long n, k, x, kocancheck = 0;
    vector<long long> a, ans;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
        d[x].first += 1;
        if (d[x].first >= k)
            kocancheck = 1;
    }
    if (kocancheck > 0)
    {
        cout << 0;
    }
    else
    {
        if (!a.empty())
        {
            sort(a.begin(), a.end());
        }
        long long min = 99999999999;
        for (long long i = 0; i < n; i++)
        {

            long long times = 0;
            while (a[i] > 1)
            {
                times++;
                a[i] = a[i] / 2;
                d[a[i]].first += 1;
                d[a[i]].second += times;
                if (d[a[i]].first >= k)
                {
                    if (d[a[i]].second < min)
                        min = d[a[i]].second;
                }
            }
        }
        cout << min;
    }
}