#include <bits/stdc++.h>

using namespace std;

vector<int> reverse(vector<int> arr, int low, int high) // reverses the given range of elements 1 2 3-> 3 2 1
{
    while (low < high)
    {
        swap(arr[high], arr[low]);
        high--;
        low++;
    }
    return arr;
}

//-naive sol---
vector<int> left_shift(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
        swap(arr[i], arr[i + 1]);
    return arr;
}

//--left shift by d elements -- naive (uses n*d time)

vector<int> left_shift_n(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
        arr = left_shift(arr);
    return arr;
}

// optimized solution ~ relies on a reversing algo

vector<int> left_shift_n_optimized(vector<int> arr, int n)
{
    arr = reverse(arr, 0, n - 1);
    arr = reverse(arr, n, arr.size() - 1);
    arr = reverse(arr, 0, arr.size() - 1);
    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    arr = left_shift_n_optimized(arr, 2);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}