#include <bits/stdc++.h>
using namespace std;

int b_search_recursion_last(vector<int> arr, int search_element, int low, int high)
{
    int middle = (low + high) / 2;

    if (low > high)
        return -1;
    if (arr[middle] > search_element)
        return b_search_recursion_last(arr, search_element, low, middle - 1);
    if (arr[middle] < search_element)
        return b_search_recursion_last(arr, search_element, middle + 1, high);
    else if (middle == arr.size() - 1 || arr[middle + 1] != arr[middle])
        return middle;
    else
        return b_search_recursion_last(arr, search_element, middle + 1, high);
}
int b_search_recursion_first(vector<int> arr, int search_element, int low, int high)
{
    int middle = (low + high) / 2;

    if (low > high)
        return -1;
    if (arr[middle] > search_element)
        return b_search_recursion_first(arr, search_element, low, middle - 1);
    if (arr[middle] < search_element)
        return b_search_recursion_first(arr, search_element, middle + 1, high);
    else if (middle == 0 || arr[middle - 1] != arr[middle])
        return middle;
    else
        return b_search_recursion_first(arr, search_element, low, middle - 1);
}
int sol(vector<int> arr, int x) // the main logic behind this approach is to find out the first occurence index and last occurence index in contiguous subarray
// and then find the difference. We always have to add 1 to it because it will be 1 less. At having both index same there is 1 min occurence so 1 is minimum
// return value.
{
    int first = b_search_recursion_first(arr, x, 0, arr.size());
    if (first == -1)
        return -1;
    else
        return b_search_recursion_last(arr, x, 0, arr.size()) - first + 1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 5, 5, 5, 5, 6, 6, 6, 7, 7};
    cout << sol(arr, 11);
}