#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int n = words.size();
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            set<char> st(words[i].begin(), words[i].end());
            bool flag = true;

            for (auto x : st)
            {
                auto it = find(allowed.begin(), allowed.end(), x);
                if (it == allowed.end())
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
                count++;
        }
        return count;
    }
};