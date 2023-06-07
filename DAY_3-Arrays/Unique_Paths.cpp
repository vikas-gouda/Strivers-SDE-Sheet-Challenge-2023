#include <bits/stdc++.h>
int paths(vector<vector<int>> &dp, int i, int j, int m, int n)
{
    if (i == m - 1 && j == n - 1)
    {
        return 1;
    }
    else if (i >= m || j >= n)
    {
        return 0;
    }
    else if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    else
    {
        return dp[i][j] = paths(dp, i + 1, j, m, n) + paths(dp, i, j + 1, m, n);
    }
}
int uniquePaths(int m, int n)
{
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return paths(dp, 0, 0, m, n);
}