#include <bits/stdc++.h>
using namespace std;

int is_leader(vector<int> arr, int n)
{
    for (int i = n + 1; i < arr.size(); i++)
    {
        if (arr[n] < arr[i])
            return -1;
    }
    return 1;
}

vector<int> find_leaders(vector<int> arr)
{
    vector<int> res;
    for (int i = 0; i < arr.size(); i++)
    {
        if (is_leader(arr, i) == 1)
            res.push_back(arr[i]);
    }
    return res;
}

void find_leaders_optimized(vector<int> arr) // optimized solution
{
    int leader = arr[arr.size() - 1];
    cout << leader << " ";
    for (int i = arr.size() - 2; i >= 0; i--)
    {

        if (leader < arr[i])
        {
            leader = arr[i];
            cout << leader << " ";
        }
    }
}
int main()
{
    vector<int> arr = {7, 10, 4, 10, 6, 5, 2};
    find_leaders_optimized(arr);
}