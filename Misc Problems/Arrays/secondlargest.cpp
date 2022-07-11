#include <bits/stdc++.h>

using namespace std;
// naive approach ---------------------------------------------------------------------------------------------------------
int getlargest(vector<int> arr)
{
    int res = arr[0];
    int pos = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > res)
        {
            pos = i;
            res = arr[i];
        }
    }
    return pos;
}

int getsecondlargest(vector<int> arr)
{
    int res = arr[0];
    int pos = -1;
    int largest = arr[getlargest(arr)];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != largest)
        {
            if (arr[i] > res)
            {
                pos = i;
                res = arr[i];
            }
        }
    }
    return pos;
}
// end of naive approach ---------------------------------------------------------------------------------------------------------------

// efficient approach-----------------------------------------------------------------------------------------------------------------

int getsecondlargest_efficient(vector<int> arr)
{
    int res = -1;
    int largest = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
            if (res == -1 || arr[i] > arr[res])
                res = i;
    }
    return res;
}
//---------------------------------------------------------------------------------------------------------------------------------------
int main()

{
    vector<int> arr = {12, 12, 12, 7};
    cout << arr[getsecondlargest_efficient(arr)];
}