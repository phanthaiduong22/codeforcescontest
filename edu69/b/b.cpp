#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int n, x;
    bool tanggiam = false;
    int ans = 1, max = 0, index = 0;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
        if (x > max)
        {
            max = x;
            index = i;
        }
    }
    if (a[0] <= max)
        tanggiam = true;
    for (int i = 1; i < n; i++)
    {   
        if (tanggiam == true)
        {
            if (i <= index)
            {
                if (a[i] < a[i - 1])
                {
                    ans = -1;
                    break;
                }
            }
            else
            {
                if (a[i] > a[i - 1])
                {
                    ans = -1;
                    break;
                }
            }
        }
        else if (tanggiam == false)
        {
            if (i < index)
            {
                if (a[i] > a[i - 1])
                {
                    ans = -1;
                    break;
                }
            }
            else
            {
                if (a[i] < a[i - 1])
                {
                    ans = -1;
                    break;
                }
            }
        }
    }
    if (ans == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}