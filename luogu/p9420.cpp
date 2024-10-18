#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isprime(ll x);
bool sz(ll x);
int main()
{
    int count = 0;
    for (ll i = 2333; i <= 23333333333333; i++)
    {
        if (sz(i))
            count++;
    }
    cout << count;
    return 0;
}
bool isprime(ll x)
{
    for (ll i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
bool sz(ll x)
{
    for (ll p = 2; p <= sqrt(x) / 2; p++)
    {
        if (!isprime(p))
            continue;
        for (ll q = 2; q <= sqrt(x) / p; q++)
        {
            if (!isprime(q))
                continue;
            if (p == q)
                continue;
            if (p * p * q * q == x)
                return true;
        }
    }
    return false;
}