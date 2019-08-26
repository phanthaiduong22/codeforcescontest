#include <string>
#include <iostream>

using namespace std;

int stringToNum(char c)     // chuyen char sang so
{
	return c - '0';
}

char numToString(int n)     // chuyen so sang char
{
	return (char)(n + 48);
}

void chuanHoa(string & a, string & b) // lam 2 xau co do dai bang nhau
{
	int l1 = a.length(), l2 = b.length();
	if (l1 >= l2)
	{
		b.insert(0, l1 - l2, '0');    // chen vao dau cua b cac ky tu '0'
	}
	else
	{
		a.insert(0, l2 - l1, '0');    // chen vao dau cua a cac ky tu '0'
	}
}

string sum(string a, string b)  // tong 2 so
{
	string s = "";
	chuanHoa(a, b);      // chuan hoa
	int l = a.length();

	int temp = 0;
	for (int i = l - 1; i >= 0; i--)   // duyet va cong
	{
		temp = stringToNum(a[i]) + stringToNum(b[i]) + temp;    // tinh tong tung doi mot
		s.insert(0, 1, numToString(temp % 10));         // gan phan don vi vao
		temp = temp / 10;     // lay lai phan hang chuc
	}
	if (temp > 0)  // neu hang chuc > 0 thi them vao KQ
	{
		s.insert(0, 1, numToString(temp));
	}
	return s;
}

// nhan so co 1 chu so voi so co nhieu chu so (VD 4 va 7826), lam tuong tu nhu phep cong
string nhanNho(char a, string b)
{
	string s = "";
	int temp = 0;
	for (int i = b.length() - 1; i >= 0; i--)
	{
		temp = stringToNum(a) * stringToNum(b[i]) + temp;
		s.insert(0, 1, numToString(temp % 10));
		temp = temp / 10;
	}

	if (temp > 0)
	{
		s.insert(0, 1, numToString(temp));
	}
	return s;
}

string nhan(string a, string b)     // nhan 2 so lon
{
	string s = "";
	int l = a.length();
	string s1[10000];

	for (int i = l - 1; i >= 0; i--)   // nhan tung chu so cua a voi b sau do cong don vao
	{
		s1[i] = nhanNho(a[i], b);   // nhan tung so cua a voi b
		s1[i].insert(s1[i].length(), l - i - 1, '0');
		s = sum(s, s1[i]);  // cong don theo cach cong so lon
	}
	return s;
}
bool isSmaller(string str1, string str2)
{
	// Calculate lengths of both string 
	int n1 = str1.length(), n2 = str2.length();

	if (n1 < n2)
		return true;
	if (n2 < n1)
		return false;

	for (int i = 0; i < n1; i++)
		if (str1[i] < str2[i])
			return true;
		else if (str1[i] > str2[i])
			return false;

	return false;
}

// Function for find difference of larger numbers 
string findDiff(string str1, string str2)
{
	// Before proceeding further, make sure str1 
	// is not smaller 
	if (isSmaller(str1, str2))
		swap(str1, str2);

	// Take an empty string for storing result 
	string str = "";

	// Calculate length of both string 
	int n1 = str1.length(), n2 = str2.length();

	// Reverse both of strings 
	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	int carry = 0;

	// Run loop till small string length 
	// and subtract digit of str1 to str2 
	for (int i = 0; i < n2; i++)
	{
		// Do school mathematics, compute difference of 
		// current digits 

		int sub = ((str1[i] - '0') - (str2[i] - '0') - carry);

		// If subtraction is less then zero 
		// we add then we add 10 into sub and 
		// take carry as 1 for calculating next step 
		if (sub < 0)
		{
			sub = sub + 10;
			carry = 1;
		}
		else
			carry = 0;

		str.push_back(sub + '0');
	}

	// subtract remaining digits of larger number 
	for (int i = n2; i < n1; i++)
	{
		int sub = ((str1[i] - '0') - carry);

		// if the sub value is -ve, then make it positive 
		if (sub < 0)
		{
			sub = sub + 10;
			carry = 1;
		}
		else
			carry = 0;

		str.push_back(sub + '0');
	}

	// reverse resultant string 
	reverse(str.begin(), str.end());

	return str;
}
// C++ program to implement division with large 
// number 

// A function to perform division of large numbers 
string longDivision(string number, int divisor)
{
	// As result can be very large store it in string 
	string ans;

	// Find prefix of number that is larger 
	// than divisor. 
	int idx = 0;
	int temp = number[idx] - '0';
	while (temp < divisor)
		temp = temp * 10 + (number[++idx] - '0');

	// Repeatedly divide divisor with temp. After  
	// every division, update temp to include one  
	// more digit. 
	while (number.size() > idx)
	{
		// Store result in answer i.e. temp / divisor 
		ans += (temp / divisor) + '0';

		// Take next digit of number 
		temp = (temp % divisor) * 10 + number[++idx] - '0';
	}

	// If divisor is greater than number 
	if (ans.length() == 0)
		return "0";

	// else return ans 
	return ans;
}
string UCLN(string a, string b)
{
	while (a != b)
	{
		if (isSmaller(a, b))
			b = findDiff(b, a);
		else
			a = findDiff(a, b);
	}
	return a;
}
long long stringtoint(string s)
{
	long long j = 1;
	long long ans = 0;
	for (int i = 0; i < s.size(); i++)
	{
		ans += (s[s.size() - 1 - i] - '0') * j;
		j = j * 10;
	}
	return ans;
}
string BCNN(string a, string b)
{
	return longDivision(nhan(a, b), stringtoint(UCLN(a, b)));
}
int main(int argc, char** argv)
{
	freopen("c.inp", "r", stdin);
	freopen("c.out", "w", stdout);
	int i=0;
	string a, b, ans="";
	string max = "99999999999";
	string k = "0";
	cin >> a >> b;
	while (i < 1000)
	{
		string a1 = sum(a, k);
		string a2 = sum(b, k);
		string bb = BCNN(a1,a2);
		if (isSmaller(BCNN(sum(a, k), sum(b, k)), max))
		{
			max = BCNN(sum(a, k), sum(b, k));
			ans = k;
		}
		k = sum(k, "1");
		i++;
	}
	cout << ans;
	return 0;
}