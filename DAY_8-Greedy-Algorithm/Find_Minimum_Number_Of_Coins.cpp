#include <bits/stdc++.h>
int findMinimumCoins(int amount)
{
    // Write your code here
    int amt = amount;
    int ans = 0;
    while (amt != 0)
    {
        if (amt >= 1000)
        {
            ans++;
            amt -= 1000;
        }
        else if (amt >= 500)
        {
            ans++;
            amt -= 500;
        }
        else if (amt >= 100)
        {
            ans++;
            amt -= 100;
        }
        else if (amt >= 50)
        {
            ans++;
            amt -= 50;
        }
        else if (amt >= 20)
        {
            ans++;
            amt -= 20;
        }
        else if (amt >= 10)
        {
            ans++;
            amt -= 10;
        }
        else if (amt >= 5)
        {
            ans++;
            amt -= 5;
        }
        else if (amt >= 2)
        {
            ans++;
            amt -= 2;
        }
        else if (amt >= 1)
        {
            ans++;
            amt -= 1;
        }
    }

    return ans;
}
