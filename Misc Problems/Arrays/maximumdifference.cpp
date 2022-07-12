#include <bits/stdc++.h>
using namespace std;
// note : the naive solution is pretty obvious O(n*n), basically traverse the array once and check for each element the biggest difference and
// store in max;
// Bonus : for sorted arrays just difference final edge - beginning edge, reverse if reverse sorted.

int solution(vector<int> arr)
{
    int minimum = INT32_MAX;
    int diff = 0;
    int i = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        minimum = min(minimum, arr[i]);
        diff = max(arr[i] - minimum, diff);
    }
    return diff;
}

int main()
{
    vector<int> arr = {2, 3, 10, 6, 4, 8, 1};
    cout << solution(arr);
}