#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int low, int high, int value)
{
    if (low < high)
    {
        return -1;
    }
    auto mid = (low + high) / 2;
    if (value < arr[mid])

        return binary_search(arr, low, mid - 1, value);

    else if (value > arr[mid])
        return binary_search(arr, mid + 1, high, value);
    return mid;
}
// naive ------------------------------------------------ requires n extra space
vector<int> remove_dupe(vector<int> arr)
{
    vector<int> temp;
    temp.push_back(arr[0]);
    int res = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp.push_back(arr[i]);
            res++;
        }
    }
    return temp;
}

// efficient ----------------------- in place operations

vector<int> remove_dupe_efficient(vector<int> arr)
{
    int res = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return arr;
}

int main()
{
    vector<int> arr = {
        1, 3, 3, 3, 3, 3, 7, 8, 3, 3};
    arr = remove_dupe(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}