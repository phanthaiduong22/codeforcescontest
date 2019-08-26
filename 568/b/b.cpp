#include <iostream>
#include <string>

using namespace std;

int main()
{
    freopen("b.inp", "r", stdin);
    freopen("b.out", "w", stdout);
    int n;
    cin >> n;
    for (int k = 0; k < n; k++)
    {
        string a, b;
        cin >> a >> b;
        int ans = 1;
        int i = 0, j = 0;
        while (1)
        {
            if (a[i] == b[j])
            {
                i++;
                j++;
                if (i == a.length())
                {
                    for (int e = j; e < b.length(); e++)
                    {
                        if (b[e] != b[e - 1])
                        {
                            ans = 0;
                            break;
                        }
                    }
                    break;
                }
            }
            else if (a[i] != b[j] && b[j] == b[j - 1])
            {
                j++;
            }
            else if (a[i] != b[j] && b[j] != b[j - 1])
            {
                ans = 0;
                break;
            }
            else if (i == a.length())
            {
                break;
            }
        }
        if (ans == 1)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}