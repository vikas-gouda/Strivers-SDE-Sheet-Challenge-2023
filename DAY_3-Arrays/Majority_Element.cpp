#include <bits/stdc++.h>

int findMajorityElement(int nums[], int n)
{
    // Write your code here.
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        m[nums[i]]++;
    }

    int max = INT_MIN;
    int key = 0;

    vector<int> v;

    int chk = floor(n / 2);
    for (auto it = m.begin(); it != m.end(); it++)
    {
        v.push_back(it->second);
    }

    sort(v.begin(), v.end());

    if (chk >= v[v.size() - 1])
    {
        return -1;
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {
        int s = it->second;
        int num = it->first;
        if (s > max)
        {
            max = s;
            key = num;
        }
    }

    return key;
}