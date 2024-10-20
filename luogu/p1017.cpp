#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n, R;
    cin >> n >> R;
    int num = n;
    char ans[20] = "";
    for (int i = 0; n != 0; i++)
    {
        int r = n % R;
        int s = n / R;
        if (r < 0)
        {
            r -= R;
            s++;
        }
        n = s;
        if (r < 10)
            ans[i] = r + '0';
        else
            ans[i] = r - 10 + 'A';
    }
    reverse(ans, ans + strlen(ans));
    cout << num << "=" << ans << "(base" << R << ")";

    return 0;
}
/*
负进制的转换和正进制的转换雷同，都是用短除取余法，这里要保证余数都要是正数才行；
要想让本来余数是负数变为正数，其实很好操作，就直接让商+1，余数-（相应的进制数）
例如 - 15 对 - 2 取余得商为 7，余数为 - 1 ；则让商加 1 变为 8 ，即商为 8 的时候余数为 1 ，可进行验算，8 × ( -2 ) +1 = -15。验算结果正确
被除数 - 余数= 商 × 除数，余数 = 被除数 - 商 × 除数，让被来为负数的余数变为正数，等于说就是让余数增大，也就是说让（商 × 除数）变小，因为除数是个负数，所以说，让商变大即可.
注意当 n 等于 0 的时候需要特判
 */