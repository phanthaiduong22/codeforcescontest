#include <iostream>

using namespace std;

int main()
{
	long long n, m, x;
	long long chan = 0;
	long long le = 0;
	cin >> n >> m;
	for (long long i = 0; i < n; i++)
	{
		cin >> x;
		if (x % 2 == 0)
			chan++;
		else
			le++;
	}
	for (long long i = 0; i < m; i++)
	{
		cin >> x;
		if ((x % 2 == 0) && (le > 0))
			le--;
		else if ((x % 2 == 1) && (chan > 0))
			chan--; 
	}
	cout << n - le - chan;
	return 0;
}