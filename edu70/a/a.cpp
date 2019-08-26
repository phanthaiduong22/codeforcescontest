#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    int T;
    cin>>T;
    while(T>0)
    {
        T--;
        string x,y;
        int ans=0;
        cin>>x>>y;
        int i=x.length()-1,j=y.length()-1;
        while(1)
        {
            if(x[i]=='1'&&y[j]=='0')
                j--;
            else if(x[i]=='1'&&y[j]=='1')
                break;
            else if(x[i]=='0'&&y[j]=='1')
                ans++;
            else 
                j--;
            i--;
            
        }
        cout<<ans<<endl;
    }
}