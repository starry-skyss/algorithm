#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
        if (s[i + 1] < 'A')
        {
            int num = s[i + 1] - '1';
            while (num-- > 0)
                cout << s[i];
            i++;
            continue;
        }
        }

    return 0;
}