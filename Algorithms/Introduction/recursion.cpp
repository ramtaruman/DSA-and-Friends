#include <bits/stdc++.h>

using namespace std;

int recursion(vector<int> arr)
{
    if (arr.size() == 1)
        return arr.front();
    else
    {
        int a = arr.back();
        arr.pop_back();
        return a + recursion(arr);
    }
}

int cout_recursion(vector<int> arr)
{
    if (arr.size() == 1)
        return 1;
    else
    {
        arr.pop_back();
        return 1 + cout_recursion(arr);
    }
}

int max_recursion(vector<int> arr, int n)
{
    if (n == 1)
        return arr[0];
    else
        return max(arr[n - 1], max_recursion(arr, n - 1));
}

int main()

{

    vector<int> a = {1, 2, 3, 4, 52};
    cout << max_recursion(a, a.size());
}