#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    string a, b;
    int count = 0;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {
            a[i] = a[i] == 'o' ? '*' : 'o';
            a[i + 1] = a[i + 1] == 'o' ? '*' : 'o';
            count++;
        }
    }
    cout << count;
    return 0;
}