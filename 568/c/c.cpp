#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    freopen("c.inp","r",stdin);
    freopen("c.out","w",stdout);
    int n,m,x,ans,ans1;
    vector<int>a,b;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        ans1=0;
        ans=a[i];
        sort(b.begin(),b.end());
        for(int j=0;j<b.size();j++)
        {
            if(ans+b[j]<=m)
            {
                ans+=b[j];
                ans1++;
            }
            else
            {
                break;
            }
        }
        cout<<i-ans1<<" ";
        b.push_back(a[i]);
    }
}