#include <bits/stdc++.h>
int subarraysXor(vector<int> &arr, int x)
{
    // Writr code here.
    unordered_map<int, int> map;
    int ans = 0;
    int Count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
        if (ans == x)
            Count++;

        int req = ans ^ x;
        if (map.find(req) != map.end())
            Count += map[req];

        map[ans]++;
    }
    return Count;
}