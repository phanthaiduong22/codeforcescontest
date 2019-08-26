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
    for (int i = 0; i < n; i++)
    {
        string s, t, p;
        int ans = 0;
        int dp[100] = {0};
        cin >> s >> t >> p;
        for (int i = 0; i < p.length(); i++)
            dp[p[i] - 'a']++;
        int j = 0;
        while (j < t.length())
        {
            if (s[j] != t[j])
            {
                if (dp[t[j] - 'a'] > 0)
                {
                    s.insert(s.begin() + j, t[j]);
                    dp[t[j] - 'a']--;
                }
                else
                {
                    ans = -1;
                    break;
                }
            }
            j++;
        }
        if ((ans == 0) && (s == t))
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}