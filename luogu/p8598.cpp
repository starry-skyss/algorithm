#include <bits/stdc++.h>
using namespace std;
int n, x, a[100005], ans1, ans2;
signed main()
{
    cin >> n;
    while (cin >> x)
        a[x]++;
    for (int i = 1; i <= 10004; i++)
    {
        if (a[i - 1] && a[i + 1] && !a[i])
            ans1 = i;
        if (a[i] > 1)
            ans2 = i;
        if (ans1 && ans2)
            break;
    }
    cout << ans1 << " " << ans2 << endl;
    return 0;
}
/*
int main()
{
    int n, m;
    int arr[105] = {0};
    int j = 0;
    cin >> n;
    while (cin >> arr[j])
        j++;
    sort(arr, arr + j);
    for (int i = 0; i < j - 1; i++)
    {
        if (arr[i + 1] - arr[i] > 1)
            m = arr[i] + 1;
        if (arr[i + 1] == arr[i])
            n = arr[i];
    }
    cout << m << ' ' << n;
    return 0;
}*/