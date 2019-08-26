#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    freopen("c.inp","r",stdin);
    freopen("c.out","w",stdout);
    int n,m,k,t,x,y;
    cin>>n>>k>>m>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        if(x==0)
        {
            if(y<k)
            {
                k=k-y;
                n=n-y;
                
            }
            else
            {
                k=k;
                n=y;
            }
        }
        else
        {
            if(y<=k)
            {
                k++;
                n++;
            }
            else
            {
                k=k;
                n++;
            }
        }
        cout<<n<<" "<<k<<endl;
    }
}