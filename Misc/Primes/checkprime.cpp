#include <bits/stdc++.h>
using namespace std;

int primenaive(int n) // naive solution which interates over n-2 elements till n
{
    int c = 2;
    while (c < n)
    {
        if (n % c == 0)
            return 0;

        else
        {
            c++;
        }
    }
    return 1;
}

int optimus_prime(int n) // optimized solution iterates over only sqrt(n) elements
{
    int c;
    while (c * c <= n)
    {
        if (n % c == 0)
            return 0;
        else
            c++;
    }
    return 1;
}

int main()
{
    int a;
    cin >> a;
    if (optimus_prime(a))
        cout << "Prime";
    else
        cout << "Not prime";
}