#include <bits/stdc++.h>
using namespace std;
int sol(vector<int> arr, int s)
{
    int left = 0, sum = 0, right, min_length = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        while (sum >= s)
        {
            min_length = min(min_length, i - left + 1);
            sum -= arr[left];
            left++;
        }
        right = i;
    }
    return min_length;
    cout << "[ ";
    for (int i = left; i <= left + min_length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
}
int main()
{
    vector<int> arr = {3, 4, 1, 1, 6};
    cout << sol(arr, 7);
}