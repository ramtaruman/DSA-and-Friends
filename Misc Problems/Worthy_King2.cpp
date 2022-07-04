#include <bits/stdc++.h>

using namespace std;

int computeDP(int mask, int n, vector<int> &v, vector<int> &dp)
{

    if (__builtin_popcountll(mask) == 0)
        return 0;

    int x = n - __builtin_popcountll(mask) + 1;

    int &ans = dp[mask];
    if (ans != -1)
    {
        return ans;
    }

    ans = INT_MAX;

    for (int kingdom = 0; kingdom < n; kingdom++)
    {
        if (mask & (1ll << kingdom))
        {
            int moves = (v[kingdom] + x - 1) / x;
            ans = min(ans, moves + computeDP((mask ^ (1ll << kingdom)), n, v, dp));
        }
    }
    return ans;
}

int main()
{

    vector<int> v = {9, 9};
    int n = v.size();
    int maskSize = (1ll << n) - 1;
    vector<int> dp(maskSize + 1, -1);
    cout << computeDP(maskSize, n, v, dp);
}