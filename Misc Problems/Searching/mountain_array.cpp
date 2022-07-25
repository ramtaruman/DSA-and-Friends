#include <bits/stdc++.h>
#include "searching.h"
using namespace std;
int sol(vector<int> arr)
{
    int low = 0, high = arr.size() - 1;
    int mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        // cout << mid << " ";
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
            return mid;
        if (arr[mid] > arr[mid + 1])
            high = mid - 1;
        if (arr[mid] > arr[mid - 1])
        {
            // cout << "boom ";
            low = mid + 1;
        }
    }
    return mid;
}
int main()
{
    vector<int> arr = {18, 29, 38, 59, 98, 100, 99, 98, 90};
    cout << sol(arr);
}