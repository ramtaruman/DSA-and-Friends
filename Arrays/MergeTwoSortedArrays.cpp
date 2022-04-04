#include <bits/stdc++.h>
using namespace std;

vector<int> naive_merge(vector<int> &a, vector<int> &b) // O(n+m) space | O((n+m)log(n+m))+O(n1+n2) time
{
    vector<int> ans;
    int size = a.size();
    for (int i = 0; i < a.size(); ++i)
    {
        ans.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); ++i)
    {
        ans.push_back(b[i]);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

void space_merge(vector<int> &a, vector<int> &b) // O(1) space | O (n * m) time
{
    int first = 0, second = 0;
    while (first < a.size() && second < b.size())
    {
        if (a[first] < b[second])
            first++;
        else if (a[first] > b[second])
        {
            swap(a[first++], b[second]);
            sort(b.begin(), b.end());
        }
    }
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < b.size(); ++i)
    {
        cout << b[i] << " ";
    }
}

int main()
{
    vector<int> a = {1, 2, 5, 6, 7};
    vector<int> b = {0, 3, 4, 8, 9};
    space_merge(a, b);
}