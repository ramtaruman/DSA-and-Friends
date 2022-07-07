#include <bits/stdc++.h>
using namespace std;

bool palindrome(string &str, int a, int b)
{
    if (a >= b)
        return true;
    if (str[a] == str[b])
        return (str, a + 1, b - 1);
    else
        return false;
}

int main()
{
    string str = "azbaa";
    if (palindrome(str, 0, str.size() - 1))
        cout << "yes";
    else
        cout << "no";
}