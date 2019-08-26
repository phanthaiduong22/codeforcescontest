#include <cstdio>
#include <cstring>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a1, a2, a3, a4, a5, a6;
	cout << "?" << " " << 1 << " " << 1;
	fflush(stdout);
	int  x;
	cin >> x;
	a1 = sqrt(x);
	cout << "?" << " " << 2 << " " << 2;
	fflush(stdout);
	cin >> x;
	a2 = sqrt(x);
	cout << "?" << " " << 3 << " " << 5;
	fflush(stdout);
	cin >> x;
	int k = a2 + 1;
	while ((double)x / (double)k != trunc(x / k))
	{
		k++;
	}
	a3 = k;
	a5 = x / k;
	cout << "?" << " " << 4 << " " << 6;
	fflush(stdout);
	cin >> x;
	k = a3 + 1;
	while ((double)x / (double)k != trunc(x / k))
	{
		k++;
	}
	a4 = k;
	a6 = x / k;
	cout << "!" << " " << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6;
	fflush(stdout);
}