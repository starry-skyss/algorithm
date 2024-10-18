#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool issq(int x);
bool issqnum(int x);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (issqnum(i))
            printf("%d\n", i);
    }
    return 0;
}
bool issq(int x)
{
    if (x == 0)
        return false;
    int tmp = sqrt(x);
    if (tmp * tmp != x)
        return false;
    return true;
}
bool issqnum(int x)
{
    int tmp = sqrt(x);
    if (tmp * tmp != x)
        return false;
    tmp = x;
    int m = 10;
    while (tmp / m)
    {
        if (issq(tmp / m) && issq(tmp % m))
            return true;
        m *= 10;
    }
    return false;
}