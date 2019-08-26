#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	freopen("c.inp", "r", stdin);
	freopen("c.out", "w", stdout);
	int n;
	string s,b;
	cin >> n;
	cin >> s;
	int i = 0, k = 0;
	while (i < n)
	{
		if ((s[i] == s[i + 1]) && (i % 2 == k))
		{
			k = abs(k - 1);
		}
		else
		{
			b += s[i];
		}
		i++;
	}
	if (b.size() % 2 == 1)
		b.resize(b.size() - 1);
	cout << n - b.size()<<endl;
	cout << b;
}