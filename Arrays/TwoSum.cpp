#include <bits/stdc++.h>
using namespace std;

pair<int, int> naive_sum(vector<int> &a, int target)
{
    for (int i = 0; i < a.size(); ++i)
    {
        for (int j = i; j < a.size(); ++j)
        {
            if (a[i] + a[j] == target)
                return (i, j);
        }
    }
}

int main()
{
}