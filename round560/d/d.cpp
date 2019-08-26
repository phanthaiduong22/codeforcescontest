#include<iostream>
#include<vector>
using namespace std;
long long gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
long long lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}
int main() {
	freopen("d.inp", "r", stdin);
	freopen("d.out", "w", stdout);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		long long n, x;
		long long ans;
		int kq = 0;
		vector<int>a;
		cin >> n;
		ans = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			a.push_back(x);
		}
		for (int j = 0; j < n; j++)
		{
			ans = lcm(a[j], ans);
		}
		for (int i = 0; i < n; i++)
		{
			if (ans == a[i])
			{
				kq = 2;
				break;
			}
		}
		if (kq == 2)
			cout << ans * 2<<endl;
		else
			cout << ans << endl;
	}
}