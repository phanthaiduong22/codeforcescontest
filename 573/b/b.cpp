#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
using namespace std;

int d[200];
int main()
{
    freopen("b.inp", "r", stdin);
    freopen("b.out", "w", stdout);
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int x1 = s1[0] - '0';
    int x2 = s2[0] - '0';
    int x3 = s3[0] - '0';
    char y1 = s1[1];
    char y2 = s2[1];
    char y3 = s3[1];
    if (s1 == s2 && s2 == s3)
    {
        cout << 0;
    }
    else if ((y1==y2)&&(y2==y3)&&((x2 - x1 == 1 && x3 - x2 == 1) ||
             (x3 - x1 == 1 && x2 - x3 == 1) ||
             (x1 - x2 == 1 && x3 - x1 == 1) ||
             (x3 - x2 == 1 && x1 - x3 == 1) ||
             (x1 - x3 == 1 && x2 - x1 == 1) ||
             (x2 - x3 == 1 && x1 - x2 == 1)))
        cout << 0;
    else if ((y1 == y2 && abs(x2 - x1) <= 2) ||
             (y2 == y3 && abs(x2 - x3) <= 2) ||
             (y3 == y1 && abs(x3 - x1) <= 2))
        cout << 1;
    else
        cout << 2;
}