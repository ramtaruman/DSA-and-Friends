#include <bits/stdc++.h>
using namespace std;
int b_search_recursion(vector<int> arr, int search_element, int low, int high)
{
    int middle = (low + high) / 2;

    if (low > high)
        return -1;
    if (arr[middle] > search_element)
        return b_search_recursion(arr, search_element, low, middle - 1);
    if (arr[middle] < search_element)
        return b_search_recursion(arr, search_element, middle + 1, high);
    else if (middle == 0 || arr[middle - 1] != arr[middle])
        return middle;
    else
        return b_search_recursion(arr, search_element, low, middle - 1);
}

int main()
{
    vector<int> arr = {0, 0, 0, 1, 1, 1};
    cout << arr.size() - b_search_recursion(arr, 1, 0, arr.size());
}