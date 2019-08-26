#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int T;
    cin >> T;
    while (T > 0)
    {
        long long a, b, n;
        T--;
        cin >> a >> b >> n;
        if (n % 3 == 0)
            cout << a << endl;
        else if (n % 3 == 1)
            cout << b << endl;
        else
            cout << (a ^ b) << endl;
    }
}