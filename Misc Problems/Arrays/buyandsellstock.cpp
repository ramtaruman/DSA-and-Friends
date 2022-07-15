#include <bits/stdc++.h>

using namespace std;

int profit_stock(vector<int> arr) // for only 1 allowed operation, basically you can only buy and sell once. Simplest scenario

// things we do : keep track of minimum and then compare the new profit everytime with prev profit. We only care about the highest profit

{
    int minimum_element = arr[0];
    int profit = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < minimum_element)
        {
            minimum_element = arr[i];
        }
        else if (arr[i] - minimum_element /*profit*/ > profit)
        {
            profit = arr[i] - minimum_element;
        }
    }
    return profit;
}

int profit_stock_unlimited(vector<int> arr) // for unlimited allowed operations, basically you can buy and sell any amount of times for max profit

// things we do : The one positive element to this problem is the fact that we can perform both buy and sell operation on the same day so we can always
// sell on the day and buy if the sequence is in sorted order

{
    int profit = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > arr[i - 1])
            profit += arr[i] - arr[i - 1];
    }
    return profit;
}

int profit_stock_unlimited_recursive(vector<int> arr, int start, int end) // recursive solution work in progress
{

    if (end <= start)
        return 0;

    int profit = 0;

    for (int i = 0; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (arr[j] > arr[i])
            {
                int current_profit = arr[j] - arr[i] + profit_stock_unlimited_recursive(arr, j + 1, end) + profit_stock_unlimited_recursive(arr, start, i - 1);
                profit = max(current_profit, profit);
            }
        }
    }
    return profit;
}

int main()
{
    vector<int> arr = {1, 5, 3, 1, 2, 8};
    cout << profit_stock_unlimited_recursive(arr, 0, arr.size() - 1);
}