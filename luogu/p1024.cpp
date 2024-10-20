#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

double f(double x);
double a, b, c, d;
int main()
{
    cin >> a >> b >> c >> d;
    double x[3] = {0};
    int count = 0;
    for (int i = -100; i < 100; i++)
    {
        if (f(i) * f(i + 1) > 0)
            continue;
        else if (f(i) * f(i + 1) == 0)
        {
            if (f(i) == 0)
                x[count++] = i;
        }
        else
        {
            double l = i, r = i + 1;
            while (r - l >= 1e-3)
            {
                double mid = (l + r) / 2.0;
                if (f(mid) * f(r) <= 0)
                    l = mid;
                else
                    r = mid;
            }
            x[count++] = l;
            if (count == 3)
                break;
        }
    }
    printf("%.2lf %.2lf %.2lf\n", x[0], x[1], x[2]);
    return 0;
}
double f(double x)
{
    return a * x * x * x + b * x * x + c * x + d;
}