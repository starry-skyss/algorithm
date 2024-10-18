#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll num;
    cin >> num;
    num /= 1000;
    num %= 3600 * 24;
    int h, m, s;
    h = (int)num / 3600;
    m = ((int)num % 3600) / 60;
    s = (int)num % 60;
    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}