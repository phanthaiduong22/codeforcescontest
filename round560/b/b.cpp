#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	freopen("b.inp", "r", stdin);
	freopen("b.out", "w", stdout);
	int n;
	vector<int>a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	int ans = 1;
	int i = 0;
	while (i<a.size())
	{
		if (ans < a[i])
		{
			ans++;
		}
		i++;
	}
	cout << ans;
}