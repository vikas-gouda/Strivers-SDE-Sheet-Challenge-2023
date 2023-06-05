#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    // Write your code here.
    int sum = 0;
    int min1 = 0;
    int max1 = INT_MAX;
    while (min1 < prices.size())
    {
        max1 = min(max1, prices[min1]);

        if (max1 <= prices[min1])
        {
            sum = max(sum, prices[min1] - max1);
        }
        min1++;
    }

    return sum;
}