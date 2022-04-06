
#include <bits/stdc++.h>
using namespace std;

// basic implementation of factorial elegantly

int factorial(int n)
{

    if (n > 1)
        return (n * factorial(n - 1));
    else
        return 1;
}

int main()
{
    cout << factorial(4);
}