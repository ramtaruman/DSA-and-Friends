#include <bits/stdc++.h>
#include "searching.h"
using namespace std;
int sol(vector<int> arr, int x)

{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low / 2 + high / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > arr[low])
        {
            if (x >= arr[low] && x < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (x > arr[mid] && x <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}
int main()
{

    vector<int> arr = {10, 12, 13, 14, 15, 16, 8, 4};
    cout << sol(arr, 8);
}