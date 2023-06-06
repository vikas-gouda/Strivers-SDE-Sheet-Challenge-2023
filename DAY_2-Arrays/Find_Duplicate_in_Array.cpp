#include <bits/stdc++.h>

int findDuplicate(vector<int> &nums, int n)
{
    // Write your code here.
    sort(nums.begin(), nums.end());
    int ans = -1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            ans = nums[i];
            break;
        }
    }

    return ans;
}
