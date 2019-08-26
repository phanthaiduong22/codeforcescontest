#include <iostream>
#include <string>
#include <vector>
using namespace std;
int d[200000];
int main()
{
	freopen("b.inp", "r", stdin);
	freopen("b.out", "w", stdout);
	long long n, x, k = 0, ans = 0, max = 0;
	cin >> n;
	vector<long long>a;
	for (long long i = 0; i < n; i++)
	{
		cin >> x;
		a.push_back(x);
	}
	for (long long i = n - 1; i >= 0; i--)
	{
		if (a[i] > ans)
		{
			ans = a[i];
			k = a[i] - 1;
			d[i] = ans;
		}
		else
		{
			if (k > a[i])
			{
				ans += a[i];
				k = a[i] - 1;
				d[i] = ans;
			}
			else if (k>0)
			{
				ans += k;
				k = k - 1;
				d[i] = ans;
			}
			else
			{
				d[i] = a[i];
				ans = d[i];
			}
		}
		if (d[i] > max)
			max = d[i];
	}
	cout << max;
}