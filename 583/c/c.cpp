#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <stack>

using namespace std;

int main()
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);
    int n;
    cin >> n;
    stack<int> s;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        if (x == '(')
        {
            s.push(0);
        }
        else
        {
            if (s.empty())
                s.push(1);
            else
            {
                if (s.top() == 0)
                {
                    s.pop();
                }
                else
                {
                    s.push(1);
                    ans = false;
                }
            }
        }
    }
    if (s.size() == 2 || s.size() == 0)
        cout << "Yes";
    else
    {
        cout << "No";
    }
}   