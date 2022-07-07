#include <bits/stdc++.h>

using namespace std;

// check if given input is power of 2

bool check(int n)
{
    if (n == 1)
        return true;
    if (n % 2 != 0)
        return false;

    return check(n / 2);
}

int main()
{
    if (check(35))
        cout << "yes";
    else
        cout << "no";
}