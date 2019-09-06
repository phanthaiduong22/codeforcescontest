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
    int str, it, point;
    int T;
    cin >> T;
    while (T > 0)
    {
        T--;
        cin >> str >> it >> point;
        if (point == 0)
        {
            if (str > it)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else
        {
            int x = (str - it - point) ;
            // int k = -str + it + point;
            // if (k % 2 == 0)
            //     x = (-str + it + point) / 2 + 1;
            // else
            // {
            //     x = (-str + it + point) / 2 + 1 ;
            // }
            if (x == 0)
                cout << point << endl;
            else if (x > 0)
                cout << point + 1 << endl;
            else
            {
                x = -x;
                x = x/2 + 1;
                int ans = point - x + 1;
                cout << ans << endl;
            }
        }
    }
}