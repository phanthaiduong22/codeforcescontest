#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    long long n, x, ans = 0, max = 9999999999999;
    vector<long long> a;
    cin >> n;
    for (long long i = 0; i < n; i++)   
    {
        cin >> x;
        a.push_back(x);
    }
    for (long long i = 0; i < n; i++)
    {
        ans=0;
        for (long long j = 0; j < n; j++)
        {
            if (abs(a[j] - a[i]) % 2 == 1)
                ans += 1;
            else
            {
                ans += 0;
            }
        }
        if (ans < max)
            max = ans;
    }
    cout << max;
}