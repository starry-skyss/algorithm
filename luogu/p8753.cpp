#include <bits/stdc++.h>
#define long long ll;
using namespace std;
int main()
{
    int n;
    int count = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if ((double)((i * i) % n) < ((double)n / 2.0))
            count++;
    }
    cout << count;
    return 0;
}