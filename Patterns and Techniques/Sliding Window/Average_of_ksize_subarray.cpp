#include <bits/stdc++.h>
using namespace std;
vector<float> sol(vector<float> arr, float k)
{
    vector<float> results;
    double sum = 0, windowstart = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (i >= k - 1)
        {
            results.push_back(sum / k);
            sum -= arr[windowstart];
            windowstart++;
        }
    }
    return results;
}
int main()
{
    vector<float> arr = {1, 3, 2, 6, -1, 4, 1, 8, 2};
    vector<float> array = sol(arr, 5);
    for (int i = 0; i < array.size(); i++)
        cout << array[i] << " ";
}