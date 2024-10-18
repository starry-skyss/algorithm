#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 2];
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    bool flag = false;
    int count = 0;
    while (!flag)
    {
        flag = true;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] != i)
            {
                swap(arr[i], arr[arr[i]]);
                flag = false;
                count++;
            }
        }
    }
    cout << count;
    return 0;
}