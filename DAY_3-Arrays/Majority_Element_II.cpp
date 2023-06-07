#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &nums)
{
    // Write your code here.
    map<int, int> m;

    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }

    vector<int> ans;

    for (auto it = m.begin(); it != m.end(); it++)
    {
        int s = it->second;
        int n = it->first;

        if (s > (nums.size() / 3))
        {
            ans.push_back(n);
        }
    }

    return ans;
}