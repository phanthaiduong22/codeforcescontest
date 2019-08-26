#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <queue>

using namespace std;

int main()
{
    freopen("b.inp", "r", stdin);
    freopen("b.out", "w", stdout);
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    if(a[n-1]>=a[n-2]+a[n-3])
        cout<<"NO";
    else
    {
        cout<<"YES"<<endl;
        swap(a[n-2],a[n-1]);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
    }
}