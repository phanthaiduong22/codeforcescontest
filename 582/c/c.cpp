#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    long long T, n, m, div;
    cin >> T;
    while (T > 0)
    {
        long long ans = 0;
        T--;
        cin >> n >> m;
        div = n / m;
        if (div >= 10)
        {
            for (long long i = 1; i <= 9; i++)
            {
                ans += (i * m) % 10;
            }
            ans = ans * (div / 10);
        }
        long long temp = div - (div / 10) * 10;
        for (long long i = 1; i <= temp; i++)
        {
            ans += (i * m) % 10;
        }
        cout << ans << endl;
    }
}