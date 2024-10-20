#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

string mi(int n)
{
    bool arr[200] = {0};
    int m[200] = {0};
    int index_arr = 0;
    int index_m = 0;
    while (n)
    {
        arr[index_arr++] = n % 2;
        if (arr[index_arr - 1])
        {
            m[index_m++] = index_arr - 1;
        }
        n /= 2;
    }
    string s;
    for (int i = index_m - 1; i >= 0; i--)
    {
        string tmp;
        if (m[i] > 2)
        {
            tmp = mi(m[i]);
        }
        else
        {
            tmp = to_string(m[i]);
        }
        if (i == 0)
        {
            if (m[i] == 1)
                s += "2";
            else
                s += "2(" + tmp + ")";
        }
        else
        {
            if (m[i] == 1)
                s += "2+";
            else
                s += "2(" + tmp + ")+";
        }
    }
    return s;
}
int main()
{
    int n;
    cin >> n;
    cout << mi(n);

    return 0;
}