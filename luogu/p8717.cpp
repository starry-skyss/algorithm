#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int big = 0, less = 100;
    double ave = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        big = max(num, big);
        less = min(less, num);
        ave += num;
    }
    printf("%d\n%d\n%.2lf", big, less, ave / n);

    return 0;
}