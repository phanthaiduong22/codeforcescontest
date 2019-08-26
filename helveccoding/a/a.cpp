#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);
    long long r;
    long long ans = 0;
    cin >> r;
    int i;
    if (r == 1||r==3)
    {
        cout<<"NO";
    }
    else if (r%2==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<1<<" "<<(r-3)/2;
    }
}