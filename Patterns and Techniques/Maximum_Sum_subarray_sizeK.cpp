#include <bits/stdc++.h>
using namespace std;
long long sol(vector<int> arr, int k)

{

    long long curr = 0, sum = INT_MIN, left_window = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        curr += arr[i];
        if (i >= k - 1)
        {
            sum = max(sum, curr);
            curr -= arr[left_window];
            left_window++;
        }
    }
    sum = max(sum, curr);
    return sum;
}
int main()
{
    vector<int> arr = {2, 3, 4, 1, 5};
    cout << sol(arr, 2);
}