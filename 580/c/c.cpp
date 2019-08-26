#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int n;
    cin >> n;
    vector<int> a(500000, 0);
    if (n % 2 == 0)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        int ans = 1;
        int i = 0, j = n;
        while (i < n || j < 2 * n)
        {
            if (i < n)
            {
                a[i] = ans;
                i++;
                ans++;
            }
            if (j < 2 * n)
            {
                a[j] = ans;
                j++;
                ans++;
            }
            if (j < 2 * n)
            {
                a[j] = ans;
                ans++;
                j++;
            }
            if (i < n)
            {
                a[i] = ans;
                ans++;
                i++;
            }
        }
        for (int i = 0; i < 2 * n; i++)
            cout << a[i] << " ";
    }
}