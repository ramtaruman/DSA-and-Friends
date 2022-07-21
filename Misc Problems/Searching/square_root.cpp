#include <bits/stdc++.h>
using namespace std;
double sol(double x)
{
    double eps = 1e-6;

    double lo = 1, high = x;
    while (high - lo > eps)
    {
        double mid = lo / 2 + high / 2;
        if (x > mid * mid)
            lo = mid;
        else
            high = mid;
    }
    return lo;
}
int main()
{
    cout << sol(176);
}