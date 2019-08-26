#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int n, m, k, x;
    vector<int> a;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> x;   
        a.push_back(x);
    }
    int maxsum = 0;
    int sum = 0;
    int left = 0, right = 0;
    for (int i = 1; i < n; ++i)
    {
        sum += a[i];
        //cout<<sum<<endl;
        if (sum < 0)
        {
            sum = 0;
            left = i + 1;
            right = i + 1;
        }

        maxsum = max(sum, maxsum);
        cout << maxsum << " " << left << " " << right << endl;
        right++;
    }
    cout << maxsum;
}