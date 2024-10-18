#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Jan、Feb、Mar、Apr、May、Jun、Jul、Aug、Sep、Oct、Nov、Dec
int main()
{
    string s;
    int month, day;
    cin >> s;
    string s1 = s.substr(0, 3);
    string s2 = s.substr(3, 2);
    day = atoi(s2.c_str());
    if (s1 == "Jan")
        month = 1;
    else if (s1 == "Feb")
        month = 2;
    else if (s1 == "Mar")
        month = 3;
    else if (s1 == "Apr")
        month = 4;
    else if (s1 == "May")
        month = 5;
    else if (s1 == "Jun")
        month = 6;
    else if (s1 == "Jul")
        month = 7;
    else if (s1 == "Aug")
        month = 8;
    else if (s1 == "Sep")
        month = 9;
    else if (s1 == "Oct")
        month = 10;
    else if (s1 == "Nov")
        month = 11;
    else if (s1 == "Dec")
        month = 12;
    cout << month << ' ' << day;
    return 0;
}