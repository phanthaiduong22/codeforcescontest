#include <iostream>
#include <string>
#include <vector>
using namespace std;

string giaithua[105];
int a[105], b[105];

//string multiply(string num1, string num2)
//{
//	int n1 = num1.size();
//	int n2 = num2.size();
//	if (n1 == 0 || n2 == 0)
//		return "0";
//
//	// will keep the result number in vector 
//	// in reverse order 
//	vector<int> result(n1 + n2, 0);
//
//	// Below two indexes are used to find positions 
//	// in result.  
//	int i_n1 = 0;
//	int i_n2 = 0;
//
//	// Go from right to left in num1 
//	for (int i = n1 - 1; i >= 0; i--)
//	{
//		int carry = 0;
//		int n1 = num1[i] - '0';
//
//		// To shift position to left after every 
//		// multiplication of a digit in num2 
//		i_n2 = 0;
//
//		// Go from right to left in num2              
//		for (int j = n2 - 1; j >= 0; j--)
//		{
//			// Take current digit of second number 
//			int n2 = num2[j] - '0';
//
//			// Multiply with current digit of first number 
//			// and add result to previously stored result 
//			// at current position.  
//			int sum = n1 * n2 + result[i_n1 + i_n2] + carry;
//
//			// Carry for next iteration 
//			carry = sum / 10;
//
//			// Store result 
//			result[i_n1 + i_n2] = sum % 10;
//
//			i_n2++;
//		}
//
//		// store carry in next cell 
//		if (carry > 0)
//			result[i_n1 + i_n2] += carry;
//
//		// To shift position to left after every 
//		// multiplication of a digit in num1. 
//		i_n1++;
//	}
//
//	// ignore '0's from the right 
//	int i = result.size() - 1;
//	while (i >= 0 && result[i] == 0)
//		i--;
//
//	// If all were '0's - means either both or 
//	// one of num1 or num2 were '0' 
//	if (i == -1)
//		return "0";
//
//	// generate the result string 
//	string s = "";
//
//	while (i >= 0)
//		s += std::to_string(result[i--]);
//
//	return s;
//}
int main()
{
	freopen("a.inp", "r", stdin);
	freopen("a.out", "w", stdout);

	int n;
	cin >> n;
	//giaithua[1] = '1';
	/*for (int i = 2; i < 105; i++)
	{
		giaithua[i] = multiply(giaithua[i - 1], to_string(i));
	}*/
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (a[s[0]-97] > b[s[0]-97])
			b[s[0] - 97] ++;
		else
			a[s[0] - 97]++;
	}
	long long ans = 0;
	for (int i = 0; i <= 25; i++)
	{
		if (a[i] >= 2)
		{
			ans += ((a[i] * (a[i] - 1)) / 2);
		}
		if (b[i] >= 2)
		{
			ans += ((b[i] * (b[i] - 1)) / 2);
		}
	}
	cout << ans;
}