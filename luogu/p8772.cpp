#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    ll s = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum -= a[i];
        s += a[i] * sum;
    }
    cout << s;

    return 0;
}