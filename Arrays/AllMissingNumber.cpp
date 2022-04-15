#include <bits/stdc++.h>
using namespace std;

int missing(vector<int> arr)
{
    int a[100000];

    for (int i = 0; i < arr.size(); ++i)
    {
        a[arr[i]] = 1;
    }
    cout << "The missing numbers are : ";
    for (int i = 1; i < arr.size() + 1; ++i)
    {
        if (a[i] != 1)
            cout << i << " ";
    }
}

int main()
{
    freopen("input.txt", "r", stdin);

    // extension of the missing number problem
    vector<int> a;
    for (int i = 0; i < 8; i++)
    {
        int input;
        cin >> input;
        a.push_back(input);
    }
    missing(a);
}