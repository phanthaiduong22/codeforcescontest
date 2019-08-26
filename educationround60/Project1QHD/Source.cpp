#include<iostream>

using namespace std;
int d[100000];
int main()
{
	int n, max, kq;
	max = 0;
	cin >> n;
	int a[100000];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			if ((a[i] == a[j]))
				d[i]++;
			else
				if ((i != j))
					break;
			if ((a[i] > max) || (a[i] == max && d[i] > kq))
			{
				max = a[i];
				kq = d[i];
			}
		}
	}

	cout << kq + 1;
	system("pause");
}