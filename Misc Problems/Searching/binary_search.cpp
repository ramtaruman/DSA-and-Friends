#include <bits/stdc++.h>
using namespace std;
int b_search_iterative(vector<int> arr, int search_element)

{
    int low = 0, high = arr.size();
    int middle = (low + high / 2);

    while (high >= low)
    {
        if (arr[middle] == search_element)
            return middle;
        if (arr[middle] > search_element) // this means our middle is further to the right
        {
            high = middle - 1;
        }
        else if (arr[middle] < search_element) // this means our middle is further to the left
        {
            low = middle + 1;
        }
        middle = (low + high) / 2;
    }
    if (arr[middle] == search_element)
        return middle;
    return -1;
}

int b_search_recursion(vector<int> arr, int search_element, int low, int high)
{
    int middle = (low + high) / 2;

    if (arr[middle] == search_element)
        return middle;
    if (low > high)
        return -1;
    if (arr[middle] > search_element)
        return b_search_recursion(arr, search_element, low, middle - 1);
    if (arr[middle] < search_element)
        return b_search_recursion(arr, search_element, middle + 1, high);
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << b_search_recursion(arr, 6, 0, arr.size()) << " - position";
}