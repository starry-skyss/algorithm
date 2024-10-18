#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int vmax = 1e9, vmin = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int tmp = a / b;
        vmax = min(tmp, vmax);
        for (int i = a / (b + 1); i < vmax; i++)
        {
            if (a / i == b)
            {
                tmp = i;
                break;
            }
        }
        vmin = max(tmp, vmin);
    }
    cout << vmin << ' ' << vmax;
    return 0;
}