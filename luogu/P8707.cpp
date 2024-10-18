#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int dp[35][35];
    memset(dp, 0, sizeof dp);
    dp[1][1] = 1;
    for (int i = 2; i <= n; i++)
        dp[i][1] = 1;
    for (int i = 2; i <= m; i++)
        dp[1][i] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= m; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            if (i % 2 == 0 && j % 2 == 0)
                dp[i][j] = 0;
        }
    }
    cout << dp[n][m];
    return 0;
}