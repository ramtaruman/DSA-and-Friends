#include "searching.h"
#include <bits/stdc++.h>
using namespace std;
int sol(vector<int> arr)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == arr.size() - 1 || arr[mid + 1] <= arr[mid]))
            return mid;
        if (mid > 0 && arr[mid - 1] >= arr[mid]) // elements exists on the left side with mid>0
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 1, 3, 5, 6, 4};
    cout << sol(arr);
}