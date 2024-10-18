#include <bits/stdc++.h>
#define ll long long
using namespace std;
// 0000=gengshen  7   9
int main()
{
    string tian[10] = {"jia", "yi", "bing", "ding", "wu", "ji", "geng", "xin", "ren", "gui"};
    string di[12] = {"zi", "chou", "yin", "mao", "chen", "si", "wu", "wei", "shen", "you", "xu", "hai"};
    int n;
    cin >> n;
    n = n % 60;
    int t = (n % 10 + 6) % 10;
    int d = (n % 12 + 8) % 12;
    cout << tian[t] << di[d];
    return 0;
}