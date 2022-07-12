#include <bits/stdc++.h>
using namespace std;

void reverse_array(vector<int> arr)
{
    int n = arr.size() - 1;
    int i = 0;
    while (n > i)
    {

        int swap = arr[i];
        arr[i] = arr[n];
        arr[n] = swap;
        n--;
        i++;
    }
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    reverse_array(arr);
}