#include <bits/stdc++.h>
using namespace std;

int binary_interation(vector<int> arr, int item)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int guess = arr[mid];

        if (guess == item)
            return mid;
        if (guess > item)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int binary_recursion(vector<int> arr, int item, int low, int high)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    int guess = arr[mid];
    if (guess == item)
        return mid;
    if (guess > item)
        return binary_recursion(arr, item, low, mid - 1);
    else
        return binary_recursion(arr, item, mid + 1, high);
}

int main()
{

    vector<int> arr = {1, 2, 3, 45, 56, 234, 22};
    cout << "The position is : " << binary_recursion(arr, 3, 0, arr.size() - 1) + 1;
}