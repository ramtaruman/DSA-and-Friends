#include <bits/stdc++.h>
using namespace std;
void naive_solution(vector<int> arr) // naive because we use extra space (lulW),but helpful if it is unsorted maybe ?
{
    int n[INT16_MAX] = {0};
    for (int i = 0; i < arr.size(); i++)
    {
        n[arr[i]]++;
    }
    for (int i = 0; i < INT16_MAX; i++)
    {
        if (n[i] > 0)
        {
            cout << i << " : " << n[i] << endl;
        }
    }
}

void optimized_solution(vector<int> arr)
{
    int freq = 1, res = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[res])
        {
            cout << arr[res] << " : " << freq << endl;
            freq = 1;
            res = i;
        }
        else
        {
            res++;
            freq++;
        }
    }
    cout << arr[res] << " : " << freq << endl;
}

int main()
{
    vector<int> arr = {40, 50, 50, 50};
    optimized_solution(arr);
}