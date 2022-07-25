#include <bits/stdc++.h>
using namespace std;
void sol(vector<int> arr)
{
    int current = arr[0], total = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (total == 0)
        {
            current = arr[i];
            total = 1;
        }
        else
        {
            if (arr[i] == current)
            {
                total++;
            }
            else if (arr[i] != current)
            {
                total--;
            }
        }
    }
    cout << current;
}
int main()
{
    vector<int> arr = {3, 2, 3};
    sol(arr);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
}