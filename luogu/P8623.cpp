#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int w, m, n;
    cin >> w >> m >> n;
    int rowm = m / w + 1;
    int rown = n / w + 1;
    int row = abs(rowm - rown);
    int cm, cn;
    if (rowm % 2 == 0)
        cm = (w - (m - (m / w) * w)) % w;
    else
        cm = (m - (m / w) * w - 1) % w;
    if (rown % 2 == 0)
        cn = (w - (n - (n / w) * w)) % w;
    else
        cn = (n - (n / w) * w - 1) % w;
    int c = abs(cn - cm);
    cout << c + row;
    return 0;
}