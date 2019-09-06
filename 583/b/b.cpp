#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    int b,g,n;
    cin>>b>>g>>n;
    if(b>n)
        b=n;
    if(g>n)
        g=n;
    if(b>n-g)
    {
        cout<<b-(n-g)+1;
    }
    else if(g>n-b)
    {
        cout<<g-(n-b)+1;
    }
    

}