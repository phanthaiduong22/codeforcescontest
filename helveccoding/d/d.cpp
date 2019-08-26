#include <iostream>
#include <vector>

using namespace std;
int d[100][100];
int d1[101];
int d2[101];
int main()
{
    freopen("d.inp", "r", stdin);
    freopen("d.out", "w", stdout);
    int n, x, y;
    vector<pair<int, int>> a;
    cin >> n;
    if (n == 2)
    {
        for (int i = 0; i < 4 * n + 1; i++)
        {
            cin >> x >> y;
            a.push_back({x, y});
            if (x - 1 >= 0)
                d[x - 1][y]++;
            if (y - 1 >= 0)
                d[x][y - 1]++;
            d[x][y + 1]++;
            d[x + 1][y]++;
        }
        for (int i = 0; i < 4 * n + 1; i++)
        {
            if (d[a[i].first][a[i].second] == 1 ||
                d[a[i].first][a[i].second] == 0 ||
                d[a[i].first][a[i].second] == 4)
                cout << a[i].first << " " << a[i].second;
        }
    }
    else
    {
        for (int i = 0; i < 4 * n + 1; i++)
        {
            cin >> x >> y;
            a.push_back({x, y});
            d1[x]++;
            d2[y]++;
        }
        int ansx = 0, ansy = 0;
        for (int i = 0; i <= 100; i++)
        {
            if (d1[i] != 0 && d1[i] != 2 && d1[i] != n + 1)
                ansx = i;
            if (d2[i] != 0 && d2[i] != 2 && d2[i] != n + 1)
                ansy = i;
        }
        cout << ansx << " " << ansy;
    }
}