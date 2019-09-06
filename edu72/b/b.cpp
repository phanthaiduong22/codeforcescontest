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
    int T;
    cin >> T;
    while (T > 0)
    {
        T--;
        int n, heal;
        int chosen = 0, choseny;
        int max = 0, max2 = 0;
        cin >> n >> heal;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x >= y)
            {
                if (x - y > max)
                {
                    chosen = x;
                    choseny = y;
                    max = x - y;
                }
                else if (x - y == max)
                {
                    if (x > chosen)
                    {
                        chosen = x;
                        choseny = y;
                        max = x - y;
                    }
                }
            }
            if (x > max2)
            {
                max2 = x;
            }
        }
        if (max2 >= heal)
            cout << 1 << endl;
        else if (max == 0)
            cout << -1 << endl;
        else
        {
            long long du;
            long long ans1 = (heal - max2) / max;
            if (ans1 < 0)
            {
                ans1 = 0;
                du = heal;
            }
            else
                du = heal - ans1 * max;
            while (du > 0)
            {
                ans1++;
                if (du - max2 <= 0)
                    break;
                du -= chosen;
                if (du <= 0)
                    break;
                du += choseny;
            }
            cout << ans1 << endl;
        }
    }
}