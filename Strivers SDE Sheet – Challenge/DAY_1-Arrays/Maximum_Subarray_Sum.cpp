#include <bits/stdc++.h>
long long maxSubarraySum(int v[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.
        No need to print anything.
        Taking input and printing output is handled automatically.
    */

    // [-2,1,-3,4,-1,2,1,-5,4]
    long long int current = 0;
    long long int max1 = 0;
    long long int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0)
        {
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        current += v[i];
        max1 = max(max1, current);
        if (current < 0)
        {
            current = 0;
        }
    }

    return max1;
}