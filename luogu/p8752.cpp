#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int count = 0;
    while (n--)
    {
        int num;
        cin >> num;
        int n3 = num / 1000, n1 = (num % 100) / 10, n2 = (num % 1000) / 100, n0 = num % 10;
        if (n3 == n1 && n0 == n2 + 1)
            count++;
    }
    cout << count;
    return 0;
}