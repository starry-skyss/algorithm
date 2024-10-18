#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    int i, j;
    for (i = 0, j = 0; i < s.length(); i++)
    {
        if (s[i] == t[j])
            j++;
        if (j == t.length())
            break;
    }
    cout << j;
    return 0;
}