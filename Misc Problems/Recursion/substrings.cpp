#include <bits/stdc++.h>

using namespace std;

void sub_string(string &s, string curr = "", int i = 0)
{

    if (i == s.length())
    {
        cout << curr << " ";
        return;
    }

    sub_string(s, curr, i + 1);
    sub_string(s, curr + s[i], i + 1);
}

int main()
{
    string s = "abc";
    sub_string(s);
}