#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selection_sort(int arr[], int n)
{
    int i, j, smallest_index;

    for (i = 0; i < n - 1; i++)
    {
        smallest_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallest_index])
                smallest_index = j;
        }
        swap(&arr[smallest_index], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int array[] = {3, 6, 3, 2, 5, 8, 14, 1, 2};
    int n = sizeof(array) / sizeof(array[0]);
    selection_sort(array, n);
    cout << "Sorted array : ";
    printArray(array, n);
    return 0;
}