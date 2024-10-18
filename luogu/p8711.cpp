#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    while (n > 0)
    {
        cout << n << ' ';
        n /= 2;
    }
    return 0;
}