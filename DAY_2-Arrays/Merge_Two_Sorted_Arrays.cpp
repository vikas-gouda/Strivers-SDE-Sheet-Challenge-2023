#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int> &v1, vector<int> &v2, int m, int n)
{
    // Write your code here.
    vector<int> nums1, nums2, v;

    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] != 0)
        {
            nums1.push_back(v1[i]);
        }
    }

    nums2 = v2;

    m = nums1.size();
    n = nums2.size();

    int i = 0, j = 0;

    for (int k = 0; i < m && j < n; k++)
    {
        if (nums1[i] < nums2[j])
        {
            v.push_back(nums1[i]);
            i++;
        }
        else
        {
            v.push_back(nums2[j]);
            j++;
        }
    }

    // nums1.clear();

    while (i < m)
    {
        v.push_back(nums1[i]);
        i++;
    }

    while (j < n)
    {
        v.push_back(nums2[j]);
        j++;
    }

    return v;
}