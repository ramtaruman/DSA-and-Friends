#include <bits/stdc++.h>

using namespace std;
long long moves = 0;
int cut_rope(int total, int a, int b, int c)

{
    if (total = 0)
        return 0;
    if (total < 0)
        return -1;

    int res = max(cut_rope(total - a, a, b, c), max(cut_rope(total - b, a, b, c), cut_rope(total - c, a, b, c)));
    if (res == -1)
        return -1;
    return res + 1;
}

int main()
{
    cout << cut_rope(23, 12, 9, 11);
}