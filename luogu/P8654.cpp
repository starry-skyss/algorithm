#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int g[1000010] = {0};
int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 0; i <= m * n; i++)
        g[i] = i;
    int k;
    cin >> k;
    while (k--)
    {
        int a, b;
        cin >> a >> b;
        int roota = a;
        while (g[roota] != roota && g[roota] > 0)
            roota = g[roota];
        g[a] = roota;
        g[roota] = -1;
        int rootb = b;
        while (g[rootb] != rootb && g[rootb] > 0)
            rootb = g[rootb];
        g[b] = rootb;
        g[rootb] = roota;
    }
    int count = 0;
    for (int i = 1; i <= m * n; i++)
    {
        if (g[i] < 0 || g[i] == i)
            count++;
    }
    cout << count;
    return 0;
}