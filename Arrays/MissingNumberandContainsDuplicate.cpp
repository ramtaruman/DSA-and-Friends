#include <bits/stdc++.h>
using namespace std;

vector<int> swap_sort(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] == arr[arr[i] - 1])
        {
            continue;
        }
        if (arr[i] != i + 1)
        {
            while (arr[i] != i + 1)
            {
                swap(arr[i], arr[arr[i] - 1]);
                if (arr[i] == arr[arr[i] - 1])
                    break;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != i + 1)
            cout << "The missing and duplicate numbers are  : " << i + 1 << " and " << arr[i] << " respectively ";
    }
}

void optimiss(vector<int> arr)
{
    arr = swap_sort(arr);
}

int mathmiss(vector<int> arr)
{
    int sum = 0;
    int sumsquare = 0;
    int natsq = 0;
    for (int i = 0; i < arr.size(); ++i)
    {
        sum += arr[i];
    }

    // sum of n natural numbers

    int nat = arr.size() * (arr.size() + 1) / 2;
    // missing number - duplicate = old sum - new sum

    for (int i = 0; i < arr.size(); i++)
    {
        sumsquare += arr[i] * arr[i];
    }
    natsq = arr.size() * (arr.size() + 1) * (2 * arr.size() + 1) / 6;
    // nat sq - sum sq= missing sq - dup sq
    // nat - sum = missing - dup
    //-----------(dividing)----------------------------
    //(natsq-sumsq)/(nat-sum)=missing+dup
    //(natsq-sumsquare)/(nat-sum)==missing+dup
    // nat-sum=missing-dup
    //------adding---------------
    // 2*missing = (natsq-sumsquare)/(nat-sum) + nat - sum
    int missing = ((natsq - sumsquare) / (nat - sum) + nat - sum) / 2;
    int duplicate = missing - nat + sum;
    cout
        << "Missing number is : " << missing << " and the duplicate is : " << duplicate;
}

// above way uses maths, O(n) time O(1) space

int miss(vector<int> arr)
{
    int a[10000];
    for (int i = 0; i < arr.size(); i++)
    {
        a[arr[i]] = 1;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (a[i] != 1)
            return i;
    }
}
// get another array of 10000 size since 10^4 is the constraint for the input. Flag the numbers which appear in that new array, and then iterate over that array till n. Non flagged indexes are the missing number.
int main()
{
    freopen("input.txt", "r", stdin);
    vector<int> arr = {3, 2, 1, 5, 1};
    swap_sort(arr);
}