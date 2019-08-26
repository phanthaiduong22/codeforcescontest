#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    string s;
    cin >> s;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            int ans2 = 0;
            int ans1 = 0;
            int curent_value = 0;
            for (int k = 0; k < s.length(); k++)
            {

                for (int q = 0; q <= 9; q++)
                {
                    int ans = -1;
                    for (int p = 0; p <= 9; p++)
                    {
                        int temp = curent_value;
                        if (((temp + p * i + q * j) % 10) == (s[k] - '0'))
                        {
                            ans = p + q;
                            curent_value += p * i + q * j;
                            break;
                        }
                        if (ans >= 0)
                            break;
                    }
                    if (ans >= 0)
                    {
                        ans1 += ans;
                        break;
                    }
                    if(p==0&&q==9)
                    {
                        no_answer=1;
                        break;
                    }
                }
                if(ans>=0)
                    ans1+=ans;
            }
            cout << ans1 << " ";
        }
        cout << endl;
    }
}