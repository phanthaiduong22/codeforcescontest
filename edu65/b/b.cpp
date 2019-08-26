#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define MAX 500000
int parent[MAX + 5];
int ranks[MAX + 5];
int d[MAX + 5];
int ans[MAX + 5];
void makeSet()
{
	for (int i = 0; i <= MAX; i++)
	{
		parent[i] = i;
		ranks[i] = 0;
		d[i] = 0;
	}
}
int findSet(int u)
{
	if (parent[u] != u)
		parent[u] = findSet(parent[u]);
	return parent[u];
}
void unionSet(int u, int v)
{
	int up = findSet(u);
	int vp = findSet(v);
	if (up == vp)
		return;
	if (ranks[up] > ranks[vp])
		parent[vp] = up;
	else if (ranks[up] < ranks[vp])
		parent[up] = vp;
	else
	{
		parent[up] = vp;
		ranks[vp]++;
	}
}
int main()
{
	freopen("b.inp", "r", stdin);
	freopen("b.out", "w", stdout);
	int n, m;
	makeSet();
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int x, a, k;
		cin >> x;
		if (x != 0)
		{
			cin >> a;
			for (int j = 1; j < x; j++)
			{
				cin >> k;
				unionSet(a, k);
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		ans[findSet(i)]++;
	}
	for (int i = 1; i <= n; i++)
	{
		cout << ans[findSet(i)] << " ";
	}

	return 0;
}
