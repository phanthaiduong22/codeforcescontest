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
    long long n, d, e;  
    cin >> n >> d >> e;
    long long dolar = n, euro = n;
    dolar = n % (5 * d);
    euro = n % (5 * e);
    cout << (min(dolar % d, euro % d));
}