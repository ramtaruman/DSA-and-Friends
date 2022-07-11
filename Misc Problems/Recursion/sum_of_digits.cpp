#include <bits/stdc++.h>

using namespace std;

int sod(int n)
{
    if (n < 10 && n % 10 > 0) // base case which basically ensure that single digit numbers return themselves and double+ digit number
        return n;

    return sod(n / 10) + n % 10;
}

int main()
{
    cout << sod(157);
}