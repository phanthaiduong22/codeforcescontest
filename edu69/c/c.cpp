#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool option(pair<long long, long long> a, pair<long long, long long> b)
{
    return (a.first > b.first || (a.first == b.first && a.second < b.second));
}
int main()
{
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    long long n, k, x;
    vector<long long> a;
    vector<pair<long long, long long>> b;
    cin >> n >> k;
    for (long long i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
        if (i >= 1)
        {
            long long temp = a[i] - a[i - 1];
            b.push_back({temp, i - 1});
        }
    }
    sort(b.begin(), b.end(), option);
    long long ans=a[n-1]-a[0];
    // for (long long i = 0; i < b.size(); i++)
    // {
    //     cout << b[i].first<<" "<<b[i].second<<endl;
    // }
    for(long long i=1;i<k;i++)
    {
        ans=ans-b[i-1].first;      
    }
    cout<<ans;
}