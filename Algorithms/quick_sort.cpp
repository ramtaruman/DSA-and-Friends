#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int qs_partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int j = low;
    for (int i = low; i < high; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(&arr[i], &arr[j]);
            j++;
        }
    }
    swap(&arr[high], &arr[j]);
    return j;
}

void quick_sort(int arr[], int low, int high)
{
    int j;
    if (high > low)

    {
        j = qs_partition(arr, low, high);
        quick_sort(arr, low, j - 1);
        quick_sort(arr, j + 1, high);
    }
}

int main()
{
    int arr[] = {6, 5, 8, 9, 3, 10, 15, 12, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    quick_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}