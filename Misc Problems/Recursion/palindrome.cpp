#include <bits/stdc++.h>
using namespace std;

int palindrome_r(const char *c, int begin, int end) // solution very akin to something one can write in C.
{
    // base cases. Basically we want to make sure that the positions we are checking are not equal or cross each other. If that is so that means
    // we are crossing the middle point and that is redundant becuase we check from both sides and one check cycle can tell us if its palindrome or
    // not. Equal is the base case whenever it is odd and crosses when at even lengths.
    if ((end - 1) <= begin)
        return 1;

    // 2nd base case where the string is not palindrome. Hitting the first unequal pair of characters will result in termination of the recursive
    // cycle and will break out from all the function calls and returning 0.
    if (c[begin] != c[end - 1])
        return 0;

    // and just like any other recursive function, we write the function as it is and pray :). Jokes aside, we want to check zone in on the inner
    // subchars now so we have to make sure we reduce the higher end by and increase the lower end by 1.
    palindrome_r(c, begin + 1, end - 1);
}

int main()

{
    if (palindrome_r("absdzodsba", 0, 11) == 1)
        cout << "Yes";
    else
        cout << "No";
}