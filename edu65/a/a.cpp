#include <iostream>
#include <string>
using namespace std;

int main()
{
	freopen("a.inp", "r", stdin);
	freopen("a.out", "w", stdout);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int n;
		string s;
		int kq = 0;
		cin >> n;
		cin >> s;
		while (n > 11)
		{
			if (s[0] != '8')
				s.erase(s.begin());
			if ((s[0] == '8') && (n >= 11))
			{
				kq = 1;
				break;
			}
			n--;
		}
		//cout << s << endl;
		if ((s[0] == '8') && (kq == 1))
			cout << "YES" << endl;
		else if ((s[0] == '8') && (n == 11))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}