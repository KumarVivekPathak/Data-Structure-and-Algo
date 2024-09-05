#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> missingRolls(vector<int> &rolls, int mean, int n)
    {

        int sum = accumulate(rolls.begin(), rolls.end(), 0);
        int sz = rolls.size();
        int totalSum = mean * (sz + n);
        int remaining = totalSum - sum;

        if (remaining < n)
            return {};

        vector<int> res(n, 0);
        int i = 0;
        while (remaining--)
        {

            res[i]++;
            if (res[i] > 6)
                return {};
            i = (i + 1) % n;
        }

        return res;
    }
};