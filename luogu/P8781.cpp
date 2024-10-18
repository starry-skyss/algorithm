#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int tmp = max(i - 1, n - i);
        tmp *= 2;
        tmp = max(tmp, 1);
        cout << tmp << endl;
    }
    return 0;
}