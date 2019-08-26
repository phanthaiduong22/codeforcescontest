#include<iostream>
#include<string>

using namespace std;

int main()
{
	freopen("telephonenumbers.inp", "r", stdin);
	freopen("telephonenumbers.out", "w", stdout);
	int T;
	cin >> T;
	for (int h = 0; h < T; h++)
	{
		int n, ans;
		ans = 0;
		string s, s1;
		cin >> n;
		cin >> s;
		int k = (n - 11) / 2;
		int k1 = k;
		int m = -1;
		int j;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '8')
				ans++;
		}
		if (ans == 0)
		{
			s1 = s;
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				if ((k > 0) && (ans > 0))
				{
					if (s[i] != '8')
					{
						s1 += s[i];
					}
					else
					{
						k--;
						ans--;
					}
				}
				else
					s1 += s[i];
			}
		}
		ans = 0;
		for (int i = 0; i < k1 + 1; i++)
		{
			if (s1[i] == '8')
			{
				cout << "YES";
				ans = 1;
				break;
			}
		}
		if (ans != 1)
			cout << "NO";
	}
}