#include <bits/stdc++.h>
using namespace std;

int max_consecutive(vector<int> arr) // shows what u need to keep in mind and what is actually going on
{
    int start = 0, res = 0, current_res = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1 && arr[res] == 0)
        {
            res = i;
            current_res++;
        }
        else if (arr[i] == 1 && arr[res] == 1)
        {
            current_res++;
        }
        else if (arr[i] == 0 && arr[res] == 1)
        {
            res = max(res, current_res);
            current_res = 0;
        }
        else
        {
            continue;
        }
    }
    return res;
}

int max_consecutive_simpler_to_understand(vector<int> arr) // very abstractive level code and it dosent shod away from being simple implementation
{
    int res = 0, current_res = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            res = max(res, current_res);
            current_res = 0;
        }
        else
        {
            current_res++;
        }
    }
    return res;
}

int main()
{
    vector<int> arr = {0, 1, 1, 0, 1, 0};
    cout << max_consecutive_simpler_to_understand(arr);
}