#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    char pre;
    string s;
    long long sum = 1;
    vector<long long> a;
    cin >> s;
    pre = s[0];
    long long k = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (i + 1 < s.size())
        {
            if (s[i - 1] == 'o' && s[i] == 'v' && s[i + 1] == 'o')
            {
            }
            else
            {
                if (s[i] != pre)
                {
                    if (pre == 'v' && sum > 1)
                        a.push_back(sum - 1);
                    else
                    {
                        a.push_back(sum);
                    }
                    sum = 1;
                }
                else
                {
                    sum++;
                }
                pre = s[i];
            }
        }
        else
        {

            if (s[i] != pre)
            {
                if (pre == 'v' && sum > 1)
                    a.push_back(sum - 1);
                else
                {
                    a.push_back(sum);
                }
                sum = 1;
            }
            else
            {
                sum++;
            }
            pre = s[i];
        }
    }
    if (pre == 'v' && sum > 1)
        a.push_back(sum - 1);
    long long number_w = 0;
    long long ans = 0;
    long long i = 1;
    pre = 0;
    long long sum2 = 0;
    if(s[0]=='o')
        a.erase(a.begin());
    for (int i = 0; i < a.size(); i++)
    {
        if ((i & 1) == 0)
            sum2 += a[i];
        //cout << a[i];
    }
    
    //cout << endl;
    long long left = 0, right;
    while (i < a.size())
    {
        left += a[i - 1];
        ans += left * a[i] * (sum2 - left);
        i += 2;
    }
    cout << ans;
}