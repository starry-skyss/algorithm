#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int card[105];
int flag[105];
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &card[i]);
        sum += card[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int num = 0;
        int count = 1;
        for (int j = i; j <= n && count <= n && num < sum; j++)
        {
            if (flag[j] == 0)
            {
                if (card[j] == count)
                {
                    num += count;
                    count = 0;
                    flag[j] = 1;
                }
                count++;
            }
            if (j == n)
                j = 0;
        }
        ans = max(ans, num);
        memset(flag, 0, sizeof(flag));
    }
    cout << ans;
    return 0;
}