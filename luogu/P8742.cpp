#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int w[105] = {0};
int dp[105][100050];
int main()
{
    int n;
    int sum = 0, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &w[i]);
        sum += w[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (w[i] == j)
                dp[i][j] = 1;
            if (dp[i - 1][j])
                dp[i][j] = 1;
            if (j + w[i] <= sum && dp[i - 1][j + w[i]])
                dp[i][j] = 1;
            if (dp[i - 1][abs(j - w[i])])
                dp[i][j] = 1;
        }
    }
    for (int i = 1; i <= sum; i++)
        if (dp[n][i])
            ans++;
    cout << ans;
    return 0;
}