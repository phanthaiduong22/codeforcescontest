#include <iostream>
#include <set>
#include <vector>
#include <map>
using namespace std;
int d[1000000];
// int binarySearchRecursion(vector<int>a, int left, int right, int x)
// {
// 	if (left <= right)
// 	{
// 		int mid = left + (right - left) / 2;
// 		if (a[mid] == x)
// 			return mid;
// 		if (a[mid] > x)
// 			return binarySearchRecursion(a, left, mid - 1, x);
// 		return binarySearchRecursion(a, mid + 1, right, x);
// 	}
// 	return -1;
// }
int main()
{
    freopen("c2.inp", "r", stdin);
    freopen("c2.out", "w", stdout);
    int n, m, x;
    vector<int> a;
    set<int> b;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    int ans = a[0];
    int ans1=1;
    cout << 0 << " ";
    for (int i = 1; i < n; i++)
    {
        b.insert(a[i-1]);
        ans = ans + a[i] - a[i - 1];
        set<int>::const_iterator it1;
        it1 = b.begin();
        if (ans + (*it1) <= m)
        {
            ans += (*it1);
            b.erase(*it1);
            ans1++;
        }
        cout<<i+1-ans1<<" ";
        //cout << ans << " ";
    }
}
