#include <bits/stdc++.h>
int removeDuplicates(vector<int> &nums, int n)
{
    // Write your code here.
    set<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
        s.insert(nums[i]);
    }

    int ans = s.size();
    nums.clear();
    for (auto it = s.begin(); it != s.end(); it++)
    {
        int k = *it;
        nums.push_back(k);
    }
    return ans;
}