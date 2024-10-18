#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int MOD = 1e9 + 7;
int dp[3050][1550];
int main()
{
    int d, t, m;
    cin >> d >> t >> m;
    dp[0][0] = 1;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 0; j <= m && j <= i; j++)
        {
            int len = d + j - (i - j);
            if (len > 0)
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;
        }
    }
    cout << dp[t][m];
    return 0;
}