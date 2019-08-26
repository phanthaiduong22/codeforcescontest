#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    long long n, x, am = 0, ans = 0, sokhong = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0)
            sokhong++;
        else
        {
            if (x < 0)
            {
                am++;
                ans += abs(x + 1);
            }
            else
            {
                ans += abs(x - 1);
            }
        }
    }
    if (sokhong > 0)
    {
        cout << ans + sokhong;
    }
    else
    {
        if(am%2==1)
            cout<<ans+2;
        else
        {
            cout<<ans;
        }
        
    }
}