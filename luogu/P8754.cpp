#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n, ans = 1;
int main()
{
    cin >> n;
    for (ll i = 2; i * i <= n; i++)
    {
        int cnt = 0;
        while (!(n % i))
        {
            cnt++;
            n /= i;
        }
        if (cnt % 2)
            ans *= i;
    }
    if (n != 1)
        ans *= n;
    cout << ans;
    return 0;
}