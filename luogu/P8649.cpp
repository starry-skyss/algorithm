#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n, k;
    ll count = 0;
    scanf("%lld %lld", &n, &k);
    ll arr[n];
    for (ll i = 0; i < n; i++)
        scanf("%lld", &arr[i]);
    for (ll i = 0; i < n; i++)
    {
        ll sum = 0;
        for (ll j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum % k == 0)
                count++;
        }
    }
    cout << count;
    return 0;
}