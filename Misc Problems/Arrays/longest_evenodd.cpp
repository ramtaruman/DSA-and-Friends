#include <bits/stdc++.h>
using namespace std;

int longest_evenodd(vector<int> arr)
{
    int res = 0, curr = 1;
    for (int i = 1; i < arr.size(); i++)
    {

        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i - 1] % 2 == 0 && arr[i] % 2 != 0))
        {
            curr++;
            res = max(res, curr);
        }
        else
        {
            res = max(res, curr);
            curr = 1;
        }
    }
    return res;
}

int main()
{

    vector<int> arr = {5, 10, 20, 6, 3, 8};
    cout << longest_evenodd(arr);
}