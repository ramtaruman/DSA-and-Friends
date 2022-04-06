#include <bits/stdc++.h>
using namespace std;

int ncr(int n, int r)
{
    if (n == 1)
        return 1;
    else if (r == 1)
        return 1;
    else if (n == 1 && r == 1)
        return 1;

    return ncr(n - 1) / (return (ncr(r - 1) * (n - r - 1)));
}

int main()
{
    freopen("input.txt", "r", stdin);
}