#include <bits/stdc++.h>

int maximumActivities(vector<int> &start, vector<int> &finish)
{
    vector<pair<int, int>> vp;
    int n = start.size();

    for (int i = 0; i < n; i++)
        vp.push_back({finish[i], start[i]});

    sort(vp.begin(), vp.end());

    int count = 1;
    int endLimit = vp[0].first;

    for (int i = 1; i < n; i++)
    {
        int s = vp[i].second, e = vp[i].first;

        if (s >= endLimit)
        {
            count++;
            endLimit = e;
        }
    }

    return count;
}