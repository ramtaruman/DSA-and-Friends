#include <bits/stdc++.h>

using namespace std;

long long power_usingrecursion(long long n, long long p)
{
    if (p == 0)
        return 1;

    else
        return n * power_usingrecursion(n, p - 1);
}

int main()

{
    cout << power_usingrecursion(12, 12);
}