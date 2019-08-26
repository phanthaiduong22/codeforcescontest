#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen("reverseastring.inp", "r", stdin);
	freopen("reverseastring.out", "w", stdout);
	int n;
	string s;
	cin >> n;
	cin >> s;
	for (int i = 1; i < n; i++)
	{
		if ((int)(s[i - 1]) > (int)(s[i]))
		{
			cout << "YES" << endl;
				cout << i  << " " << i+1;
				break;
		}
		if (i == n - 1)
			cout << "NO" << endl;
	}
}