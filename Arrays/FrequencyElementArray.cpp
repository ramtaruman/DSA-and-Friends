#include <bits/stdc++.h>
using namespace std;

void naive_count(vector<int> &a, int element)
{
    int ans = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] == element)
            ans++;
    }
    cout << ans << " ";
}

void count_all(vector<int> &a)
{
    int b[100] = {0};
    for (int i = 0; i < a.size(); i++)
    {
        b[a[i]]++;
    }
    for (int i = 0; i < 100; i++)
    {
        if (b[i] > 0)
            cout << "\n"
                 << i << " : " << b[i] << " ";
    }
}

int main()
{
    vector<int> a = {1, 1, 1, 1, 1, 3, 4, 5, 6, 7};
    count_all(a);
}