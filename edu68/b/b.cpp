#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    int T;
    cin >> T;
    for (int k = 0; k < T; k++)
    {
        int n, m;
        cin >> n >> m;
        vector<char> a;
        char x;
        int dx[50000]={0};
        int dy[50000]={0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> x;
                if (x == '*')
                {
                    dx[j]++;
                    dy[i]++;
                }
                a.push_back(x);
            }
        }
        long long ans = 99999999999999;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i * m + j] == '*')
                {
                    if (n - dx[j] + m - dy[i] < ans)
                        ans = n - dx[j] + m - dy[i];
                }
                else
                {
                    if (n - dx[j] + m - dy[i] - 1 < ans)
                        ans = n - dx[j] + m - dy[i] - 1;
                }
            }
        }
        cout << ans << endl;
    }
}
