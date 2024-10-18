#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0, d = 0;
    bool flag = false;
    for (a = 0; a < (int)sqrt(n); a++)
    {
        for (b = 0; b < (int)sqrt(n); b++)
        {
            for (c = 0; c < (int)sqrt(n); c++)
            {
                d = (int)sqrt(n - a * a - b * b - c * c);
                if (a * a + b * b + c * c + d * d == n)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (flag)
            break;
    }
    cout << a << ' ' << b << ' ' << c << ' ' << d;
    return 0;
}