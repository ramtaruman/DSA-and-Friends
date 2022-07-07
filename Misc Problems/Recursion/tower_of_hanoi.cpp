#include <bits/stdc++.h>
using namespace std;

void tower_hanoi(int n, string from, string to, string via)
{

    if (n == 1)
        cout << "moving from " << from << " and moving to " << to << endl;
    else
    {
        tower_hanoi(n - 1, from, via, to);
        tower_hanoi(1, from, to, via);
        tower_hanoi(n - 1, via, to, from);
    }
}

int main()
{

    tower_hanoi(3, "first_tower", "third_tower", "second_tower");
}