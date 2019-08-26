#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
int d[500];
int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int n, m, x, ans = 0;   
    vector<int> a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
        d[x]++;
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        b.push_back(x);
        d[x]++;
    }
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                {
                    if(d[a[i]+b[j]]==0)
                        {
                            ans=1;
                            cout<<a[i]<<" "<<b[j];
                            break;
                        }
                }
                if(ans==1)
                    break;
        }
}