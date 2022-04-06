// given 2d matrix with 1s and 0s. Turn the rows and columns protruding from the zero into zeros

#include <bits/stdc++.h>

using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    int row, column;

    cin >> row >> column;
    int a[row][column];
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < column; ++j)
            cin >> a[i][j];

    int drow[row], dcolumn[column];

    for (int i = 0; i < row; ++i)
        for (int j = 0; j < column; ++j)
        {
            if (a[i][j] == 0)
            {
                drow[i] = 0;
                dcolumn[j] = 0;
            }
        }
    for (int i = 0; i < row; ++i)
        if (drow[i] == 0)
        {
            for (int j = 0; j < column; ++j)
                a[i][j] = 0;
        }
    for (int j = 0; j < column; ++j)
        if (dcolumn[j] == 0)
        {
            for (int i = 0; i < row; ++i)
                a[i][j] = 0;
        }
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

// the main way this is coded is by taking another set of row and column which are only there to represent the state of its respective array. For exammple if the value is 0, that means that row/column has a zero in it. Doing a normal NxM check will lead to comparision and can easily print the resultant array.

// Actual space being used -> N+M for storage
// Time complexity -> NxM for traversal

// Space optimized -> Doing certain inplace operation without creating another array would be eventually leading to a messy scenario, but for that you can easily do inplace opeartion by turning the resultant zeroes into another X number meanwhile, at the end you just turn the X to 0 and print the array.