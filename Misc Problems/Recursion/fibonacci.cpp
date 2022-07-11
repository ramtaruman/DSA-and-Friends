#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    // base case f(0)=-0 and f(1)==1

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    // for f(n>1) returns f(n-1)+f(n-2). Eventually ends up at f(1)+f(0). With values 1 and 0.
    if (n > 1)
        return fib(n - 1) + fib(n - 2);
}

int fibo(int n) // much more elegant solution. What we do different here is the fact that we return n for n<=1 basically covering both the cases of 0 and 1
{               // since the only base cases we have to deal with here are f(0) and f(1).
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    for (int i = 0; i <= 10; i++) // f(0) puts 0. f(1) puts 1. Recursion starts from f(2), where f(1) and f(0) are used which returns 1.
    {
        cout << fib(i) << " ";
    }
}