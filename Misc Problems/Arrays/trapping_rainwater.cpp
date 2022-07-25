#include <bits/stdc++.h>
using namespace std;

int trapping_rainwater(vector<int> arr) // naive solution

// basically we  look for different massximum towers left and right and then try to figure out the volume of water possible between them > n2

{
    int res = 0;
    for (int i = 1; i < arr.size() - 1; i++)
    {
        int lmax = arr[i];
        for (int j = 0; j < i; j++)
            lmax = max(lmax, arr[j]);
        int rmax = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            rmax = max(rmax, arr[j]);
        }
        // at this point we have both pillars required for our current block of volume of water in this index. If both rmax and lmax are same that means
        // we are standing on the highest pillar possible in the middle which wont allow water to be stored

        res += min(rmax, lmax) - arr[i];
    }
    return res;
}

int trapping_rainwater_optimal(vector<int> arr)
{
    int res = 0;
    int lmax[arr.size()], rmax[arr.size()];
    lmax[0] = arr[0];
    rmax[arr.size() - 1] = arr[arr.size() - 1];
    for (int i = 1; i < arr.size(); i++)
    {
        lmax[i] = max(arr[i], lmax[i - 1]);
    }
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        rmax[i] = max(arr[i], rmax[i + 1]);
    }
    for (int i = 1; i < arr.size() - 1; i++)
    {
        res += min(lmax[i], rmax[i]) - arr[i];
    }
    return res;
}

void trapping_optimal_fastest(vector<int> arr)
{
    int L = 0, R = arr.size() - 1, water_trapped = 0, maxL = arr[L], maxR = arr[R];

    while (L != R)
    {

        maxR = max(maxR, arr[R]);

        while (L < R)
        {
            if (maxL < maxR)
            {

                L++;
                maxL = max(maxL, arr[L]);
                if (maxL - arr[L] > 0)
                    water_trapped += maxL - arr[L];
            }
            else

            {
                R--;
                maxR = max(maxR, arr[R]);
                if (maxR - arr[R] > 0)
                    water_trapped += maxR - arr[R];
            }
        }
    }
    cout << water_trapped;
}
int main()
{
    vector<int> arr = {3, 0, 1, 2, 5};
    cout << trapping_rainwater_optimal(arr);
}