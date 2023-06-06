#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    //   Write your code here

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    // OR
    // sort(arr,arr+n);
}