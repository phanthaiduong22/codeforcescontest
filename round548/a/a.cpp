#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen("a.inp", "r", stdin);
	freopen("a.out", "w", stdout);
	int n, d, ans = 0;
	string s;
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; i++)
	{
		if (s[i] % 2 == 0)
		{
			ans += (i + 1);
		}
	}
	cout << ans;
}