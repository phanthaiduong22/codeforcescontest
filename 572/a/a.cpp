#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <queue>

using namespace std;

int main()
{
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    int n, zero = 0, one = 0;
    string s;
    cin>>n;
    cin>>s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            one++;
        else
        {
            zero++;
        }
    }
    if (zero != one)
    {
        cout << 1 << endl
             << s;
    }
    else
    {
        cout << 2<<endl;
        cout << s[0]<<" ";
        for (int i = 1; i < n; i++)
            cout << s[i];
    }
}
