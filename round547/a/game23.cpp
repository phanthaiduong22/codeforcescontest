#include <map>
#include <iostream>
using namespace std;


int main() {
	freopen("game23.inp", "r", stdin);
	freopen("game23.out", "w", stdout);
	long long N, M;
	cin >> N >> M;
	map<long long, long long> a;
	map<long long, long long> b;
	for (long long i = 2; i <= N; i++) {
		while (N % i == 0) {
			a[i]++;
			N /= i;
		}
	}
	for (long long i = 2; i <= M; i++) {
		while (M % i == 0) {
			b[i]++;
			M /= i;
		}
	}
	map<long long, long long>::iterator p;
	p = a.begin();
	long long kq = 0;
	if (a[2] > b[2])
	{
		kq = -1;
	}
	else if (a[3] > b[3])
	{
		kq = -1;
	}
	else
	{
		for (p = a.begin(); p != a.end(); p++)
		{
			if (b[p->first] == a[p->first])
				continue;
			else if (b[p->first] == 0)
			{
				kq = -1;
				break;
			}
			else
				kq++;
		}
		if (kq != -1)
		{
			kq = (b[3] - a[3]) + (b[2] - a[2]);
		}
	}
	cout << kq;
}