#include <bits/stdc++.h>
using namespace std;
int b_search_iterative(vector<int> arr, int search_element)

{
    int low = 0, high = arr.size();

    while (high >= low)
    {
        int middle = (low + high / 2);
        if (arr[middle] == search_element)
        {
            if (middle == arr.size() - 1 || arr[middle + 1] != arr[middle])
                return middle;
            else
            {
                low = middle + 1;
            }
        }
        else if (arr[middle] > search_element) // this means our middle is further to the right
        {
            high = middle - 1;
        }
        else if (arr[middle] < search_element) // this means our middle is further to the left
        {
            low = middle + 1;
        }
    }
    return -1;
}
int b_search_recursion(vector<int> arr, int search_element, int low, int high)
{
    int middle = (low + high) / 2;

    if (low > high)
        return -1;
    if (arr[middle] > search_element)
        return b_search_recursion(arr, search_element, low, middle - 1);
    if (arr[middle] < search_element)
        return b_search_recursion(arr, search_element, middle + 1, high);
    else if (middle == arr.size() - 1 || arr[middle + 1] != arr[middle])
        return middle;
    else
        return b_search_recursion(arr, search_element, middle + 1, high);
}
int sol(vector<int> arr, int search_element)

{
}
int main()
{

    vector<int> arr = {5, 10, 10, 15, 20, 20, 30};
    cout << b_search_iterative(arr, 10);
}