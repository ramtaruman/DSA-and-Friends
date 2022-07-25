#include <bits/stdc++.h>
using namespace std;
void sol(vector<int> arr, int target)

{
    int low = 0, high = arr.size() - 1;
    while (high > low)
    {
        if (arr[low] + arr[high] == target)
            cout << low << " " << high;
        if (arr[low] + arr[high] > target)
            high--;
        else
            low++;
    }
}
int main()
{
    vector<int> arr = {2, 5, 8, 12, 30};
    sol(arr, 35);
}