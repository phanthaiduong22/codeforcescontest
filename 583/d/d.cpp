#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
int ans = 0;
using namespace std;

void BFS(vector<vector<int>> d, int n, int m, int i, int j)
{
    if (i == n - 1 && j == m - 1)
    {
        ans++;
    }
    if (i > n || j > m)
        return;
    if (d[i + 1][j] == 0)
    {
        BFS(d, n, m, i + 1, j);
    }
    if (d[i][j + 1] == 0)
    {
        BFS(d, n, m, i, j + 1);
    }
}
int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> d(n + 5, vector<int>(m + 5, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            if (x == '.')
                d[i][j] = 0;
            else
                d[i][j] = 1;
        }
    for (int i = 0; i < n; i++)
        d[i][m] = 1;
    for (int i = 0; i < m; i++)
        d[n][i] = 1;
    BFS(d, n, m, 0, 0);
    int temp = 0, temp1 = 0, ans1 = 0;
    if (d[0][1] == 0)
        temp++;
    if (d[1][0] == 0)
        temp++;
    if (d[n - 1][m - 2] == 0)
        temp1++;
    if (d[n - 2][m - 1] == 0)
        temp1++;
    ans1 = min(temp, temp1);
    cout << ans << ans1;
    if (ans > 0)
        cout << ans1 << endl;
    else
        cout << min(ans1, ans);
}