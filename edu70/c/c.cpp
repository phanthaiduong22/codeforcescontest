#include <iostream>
#define MAX 100000
using namespace std;

int main()
{
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    int T;
    cin>>T;
    while(T>0)
    {
        int n,x,y,z;
        T--;
        cin>>n;
        for(int i=0;i<=200;i++)
            for(int j=0;j<=200;j++)
                for(int k=0;k<=200;k++)
                    if(i*((j*(j-1))/2)*k==n)
                        {
                            x=i;
                            y=j;
                            z=k;
                            break;
                        }
        for(int i=0;i<x;i++)
            cout<<'1';
        for(int j=0;j<y;j++)
            cout<<'3';
        for(int k=0;k<z;k++)
            cout<<'7';
        cout<<endl;
    }
}