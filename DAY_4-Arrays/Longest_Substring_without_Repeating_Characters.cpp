#include <bits/stdc++.h>
int uniqueSubstrings(string input)
{
    int n = input.size();
    set<int> s;
    int l = 0, r = 0, res = 0;
    while (r < n)
    {
        if (s.find(input[r]) != s.end())
        {
            s.erase(input[l]);
            l++;
        }
        else
        {
            s.insert(input[r]);
            r++;
        }
        res = max(res, r - l);
    }
    return res;
}