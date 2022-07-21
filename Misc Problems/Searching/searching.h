#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int search_element, int lower_bound, int higher_bound)
{
    int middle = (lower_bound + higher_bound) / 2;

    if (arr[middle] == search_element)
        return middle;
    if (lower_bound > higher_bound)
        return -1;
    if (arr[middle] > search_element)
        return binary_search(arr, search_element, lower_bound, middle - 1);
    if (arr[middle] < search_element)
        return binary_search(arr, search_element, middle + 1, higher_bound);
}