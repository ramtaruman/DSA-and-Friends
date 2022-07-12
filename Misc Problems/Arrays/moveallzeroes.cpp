#include <bits/stdc++.h>

using namespace std;
// naive solution ------------------------------------------ n 2
vector<int> move_zeroes(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == 0)
            for (int j = i + 1; j < arr.size(); j++)
                if (arr[j] != 0)
                    swap(arr[i], arr[j]);

    return arr;
}

vector<int> move_zeroes_optimal(vector<int> arr)
{
    int res = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[res], arr[i]);
            res++;
        }
    }
    return arr;
}
int main()

{
    vector<int> arr = {1, 2, 0, 0, 3, 4, 0, 0, 5, 0};

    arr = move_zeroes_optimal(arr);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}