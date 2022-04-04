#include <bits/stdc++.h>
using namespace std;

// We are supposed to return an array with first n non duplicate elements in a sorted manner

void optimized_dupe(vector<int> &a) // O1 space On time
{
    int first = 0, second = 1;

    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            a[second++] = a[i + 1];
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{

    vector<int> a = {1, 2, 2, 2, 2, 3, 3, 3, 5, 5, 6, 7, 9, 9, 9};
    optimized_dupe(a);
}