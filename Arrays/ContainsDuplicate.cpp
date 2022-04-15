#include <bits/stdc++.h>
using namespace std;

bool dup(int arr[])
{
    sort(arr, arr + 10);
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] == arr[i - 1])
            return true;
    }
    return false;
}

int main()
{
    freopen("input.txt", "r", stdin);

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    // there is effectively two way to solve this problem
    //-------------------------------------------------------
    // one . we put everything in a set and then compare with the base array. Such solution would consume n space but will only have n time too

    // two. we sort the array (nlogn) and then traverse over it linearly checking adjacent elements for duplicates. This uses constant space but uses nlogn time.

    // here we do the constant space one
    if (dup(arr))
        cout << "yes";
    else
        cout << "no";
}