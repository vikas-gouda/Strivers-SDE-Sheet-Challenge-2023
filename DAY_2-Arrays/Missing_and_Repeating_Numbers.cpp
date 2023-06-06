#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    // Write your code here
    map<int, int> m;
    int ans1 = -1;
    int ans2 = 0;
    int sum = (n * (n + 1)) / 2;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
        ans2 += arr[i];
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > 1)
        {
            ans1 = it->first;
            break;
        }
    }

    ans2 -= (sum + ans1);

    return {abs(ans2), abs(ans1)};
}
