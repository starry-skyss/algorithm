#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool is_spe(int x);
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (is_spe(i))
            sum += i;
    }
    cout << sum;
    return 0;
}
bool is_spe(int x)
{
    while (x)
    {
        int tmp = x % 10;
        if (tmp == 0 || tmp == 1 || tmp == 2 || tmp == 9)
            return true;
        x /= 10;
    }
    return false;
}