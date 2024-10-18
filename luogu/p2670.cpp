#include <iostream>
using namespace std;
int main()
{
    char ori[102][102];
    char ans[102][102];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= n + 1; i++)
        ori[i][0] = ori[i][m + 1] = '?';
    for (int i = 0; i <= m + 1; i++)
        ori[0][i] = ori[n + 1][i] = '?';
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            char s;
            cin >> s;
            ori[i][j] = s;
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (ori[i][j] == '*')
            {
                ans[i][j] = '*';
                cout << ans[i][j];
                continue;
            }
            char num = '0';
            for (int a = i - 1; a <= i + 1; a++)
                for (int b = j - 1; b <= j + 1; b++)
                {
                    if (a == i && b == j)
                        continue;
                    if (ori[a][b] == '*')
                        num++;
                }
            ans[i][j] = num;
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}