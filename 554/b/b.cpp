#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
string dectobin(int number)
{
	if (number == 0) return "0";
	if (number == 1) return "1";

	if (number % 2 == 0)
		return dectobin(number / 2) + "0";
	else
		return dectobin(number / 2) + "1";
}

int bintodec(string number)
{
	int result = 0, pow = 1;
	for (int i = number.length() - 1; i >= 0; --i, pow <<= 1)
		result += (number[i] - '0') * pow;

	return result;
}
string xorr(string s1, int s2)
{
	for (int i = 0; i < s2; i++)
	{
		if (s1[s1.size() - 1 - i] == '1')
			s1[s1.size() - 1 - i] = '0';
		else
			s1[s1.size() - 1 - i] = '1';
	}
	return s1;
}
bool check(string s)
{
	for (int i = 0; i < s.size(); i++)
		if (s[i] == '0')
			return false;
	return true;
}
int main()
{
	freopen("b.inp", "r", stdin);
	freopen("b.out", "w", stdout);
	int n, ans = 0;
	cin >> n;
	vector<int>a;
	string s = dectobin(n);
	int i = 0;
	while (i < s.size())
	{
		if (s[i] == '0')
		{
			if (check(s) == true)
				break;
			ans++;
			s = xorr(s, s.size() - i);
			a.push_back(s.size() - i);
			if (check(s) == true)
				break;
			ans++;
			int h = bintodec(s);
			h = h + 1;
			s = dectobin(h);
		}
		i++;
		if (ans > 40)
			ans = -1;
	}
	if (ans == -1)
		cout << 0;
	else
	{
		cout << ans << endl;
		for (int i = 0; i < a.size(); i++)
			cout << a[i] << " ";
	}
}