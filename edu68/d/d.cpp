#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int T;
    cin >> T;   
    for (int i = 0; i < T; i++)
    {
        long long n, k;
        cin >> n >> k;
        if (n < k)
            cout << "Bob" << endl;
        else if (n == k)
            cout << "Alice" << endl;
        else
        {
            long long ans = n % (k * 2);
            if (ans < k)
                cout<< "Bob" << endl;
            else
                cout << "Alice" << endl;
        }
    }
}