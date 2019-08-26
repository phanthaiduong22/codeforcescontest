#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int x1, x2,max,max1,n;
	max = 0;
	max1 = 0;

	int a[100000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > max)
			max = a[i];
	}
	int k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == max)
		{
			k++;
			if (k > max1)
				max1 = k;
		}
		else
			k = 0;
	cout << max1;
//system("pause");
}