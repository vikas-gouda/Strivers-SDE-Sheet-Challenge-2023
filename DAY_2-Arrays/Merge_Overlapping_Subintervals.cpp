#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> output;
    for (auto interval : intervals)
    {
        if (output.empty() || output.back()[1] < interval[0])
        {
            output.push_back(interval);
        }
        else
        {
            output.back()[1] = max(output.back()[1], interval[1]);
        }
    }
    return output;
}
