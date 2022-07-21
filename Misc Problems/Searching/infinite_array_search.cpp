#include "searching.h"
#include <bits/stdc++.h>
using namespace std;
int sol(vector<int> arr, int x)

{
    if (arr[0] == x)
        return 0;
    int i = 1;
    while (arr[i] < x)
    {
        i *= 2;
    }
    if (arr[i] == x)
        return i;

    return binary_search(arr, x, i / 2 + 1, i);
}
int main()
{
    // the general idea of the problem is the figure out an index which contains an element bigger than our target element
    // for example we want to find x

    // 10 20 30 40 50 60 x 200 250 300 ...

    // we start from index=1 and check for x>arr[i]. If true that means our index is the upper limit of checking for bsearch and the previous index was
    // the lower limit
}