#include <bits/stdc++.h>
using namespace std;

// we are required to find the maximum sum of a subarray in the given input array
int naive_solution(vector<int> arr)
{
    int res = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        int curr = 0;
        for (int j = i; j < arr.size(); j++)
        {
            curr += arr[j];
            res = max(curr, res);
        }
    }
    return res;
}

int main()
{
    vector<int> arr = {1, -2, 3, -1, 2};
    cout << naive_solution(arr);
}