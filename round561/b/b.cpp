#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string s = "ueoaiueoai";
bool isprime(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= trunc(sqrt(n)); i++)
		if (n % i == 0)
			return false;
	return true;
}
int main()
{
	freopen("b.inp", "r", stdin);
	freopen("b.out", "w", stdout);
	int n;
	cin >> n;
	if (isprime(n) == true)
		cout << -1;
	else
	{
		int ans, row, column;
		ans = 0;
		for (int i = 5; i < n; i++)
		{
			if (ans == 1)
				break;
			for (int j = 5; j < n; j++)
				if (n == i * j)
				{
					ans = 1;
					row = i;
					column = j;
					break;
				}
		}
		string s2 = "";
		if (ans == 0)
			cout << -1;
		else
		{
			for (int i = 0; i < column; i++)
			{
				for (int j = 0; j < row; j++)
				{
					s2 += s[i % 5 + j % 5];
				}
			}
			cout << s2;
		}
	}
}