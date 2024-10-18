#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a, b, n;
    bool flag = false;
    ll day = 0;
    cin >> a >> b >> n;
    ll week = n / (5 * a + 2 * b);
    n -= week * (5 * a + 2 * b);
    for (int i = 1; i <= 5; i++)
    {
        if (a * i >= n)
        {
            flag = true;
            day = i;
            break;
        }
    }
    if (!flag)
    {
        if (5 * a + b >= n)
            day = 6;
        else
            day = 7;
    }
    day += 7 * week;
    cout << day;

    return 0;
}