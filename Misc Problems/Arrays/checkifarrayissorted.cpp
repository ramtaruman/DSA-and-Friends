#include <bits/stdc++.h>

using namespace std;

int check_if_sorted(vector<int> arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > arr[i + 1])
            return -1;
    }
    return 1;
}

int main()
{
    vector<int> array = {1, 2, 1, 21};
    if (check_if_sorted(array) == 1)
        cout << "Yes";
    else
        cout << "No";
}