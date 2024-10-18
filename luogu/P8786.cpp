#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll MOD = 1e9 + 7;
int n, m, dp[105][105][105]; // dp数组
int main()
{
    cin >> n >> m;
    dp[0][0][2] = 1;
    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j <= m - 1; j++)
        {
            if (i == 0 && j == 0)
                continue;
            for (int k = 0; k <= 100; k++) // 因为最多出现100次操作2，故va最大为100
            {
                if (k % 2 == 0 && i)
                    dp[i][j][k] += dp[i - 1][j][k / 2]; // 操作1
                if (j)
                    dp[i][j][k] += dp[i][j - 1][k + 1]; // 操作2
                dp[i][j][k] %= MOD;                     // 取模
            }
        }
    }
    cout << dp[n][m - 1][1] % MOD; // 见1.3.2
}