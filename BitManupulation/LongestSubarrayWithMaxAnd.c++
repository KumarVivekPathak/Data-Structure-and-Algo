#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int maxNum = 0;
        int res = 0;
        int streak = 0;

        for (int num : nums)
        {
            if (num > maxNum)
            {
                maxNum = num;
                res = 0;
                streak = 0;
            }
            if (maxNum == num)
                streak++;
            else
                streak = 0;

            res = max(res, streak);
        }
        return res;
    }
};