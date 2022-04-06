#include <bits/stdc++.h>
using namespace std;

int sum = 0;

int check(string s, int i)
{
    if (s[i] == s.size() / 2 && s[i] == s[s.size() - 1 - i])
        return 1;
    if (s[i] == s[s.size() - 1 - i])
    {
        return sum++ + check(s, i + 1);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    string s = "boob";
    if (check(s, 0) >= s.size())
        cout << "yes";
    else
        cout << "no";
}