#include <bits/stdc++.h>

using namespace std;

int maj_ele(vector<int> arr)
{
    int me = arr[0], count = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == me)
        {
            count++;
        }
        else if (me != arr[i])
        {
            count--;
            if (count == 0)
            {
                count = 1;
                me = arr[i];
            }
        }
    }
    if (count > 0)
        return me;
    return -1;
}

int main()
{
    vector<int> arr = {10, 2, 3, 10, 10, 10, 7};
    cout << maj_ele(arr);
}