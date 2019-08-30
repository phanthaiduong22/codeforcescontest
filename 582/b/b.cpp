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
        T--;
        int n, ans = 0,min=99999999,x;
        vector<int>a;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] <= min)
                min = a[i];
            else
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}