#include <iostream>
#include <string>
using namespace std;

int main()
{
	freopen("a.inp", "r", stdin);
	freopen("a.out", "w", stdout);
	string s;
	int n, x, y;
	int ans = 0;
	int j = 0;
	cin >> n >> x >> y;
	cin >> s;
	for (int i = 1; i <= x; i++)
	{
		if (j < y)
			if (s[n - i] == '1')
				ans++;
		if (j == y)
			if (s[n - i] == '0')
				ans++;
		if (j > y)
			if (s[n - i] == '1')
			ans++;
		j++;
	}
	cout << ans;
	//cout << 11010100110 % 100000;
}