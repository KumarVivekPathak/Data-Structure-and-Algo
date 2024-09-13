#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
    {
        vector<int> res;
        for (auto &tmp : queries)
        {
            int left = tmp[0];
            int right = tmp[1];
            int temp = 0;
            for (int i = left; i <= right; i++)
            {
                temp ^= arr[i];
            }
            res.push_back(temp);
        }
        return res;
    }
};