#include <bits/stdc++.h>
using namespace std;
long long moves = 0;

void toh(int n, string a, string b, string c) // function with more better indicators for nth disks
{
    if (n == 1)
    {
        cout << "moving disk from " << a << " to " << c << endl;
        moves++;
    }
    else
    {
        toh(n - 1, a, c, b); // n-1 is moved from a to b using c as aux
        toh(1, a, b, c);
        toh(n - 1, b, a, c); // n-1 is moved from b to c using a as aux
    }
}

void hanoi(int n, string first, string final, string middle) // primary function also documents moves
{
    if (n == 1)
    {
        // cout << "Move disk from pole " << from << " to pole " << to << endl;
        moves++;
    }
    else
    {
        hanoi(n - 1, first, middle, final);
        hanoi(1, first, final, middle);
        hanoi(n - 1, middle, final, first);
    }
}

int main()
{

    toh(3, "first_tower", "final_tower", "middle_tower");
    cout << "Number of moves taken : " << moves;
}