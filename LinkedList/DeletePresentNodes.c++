#include <bits/stdc++.h>;
using namespace std;

//   Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *modifiedList(vector<int> &nums, ListNode *head)
    {
        unordered_set<int> st(nums.begin(), nums.end());
        ListNode *res = new ListNode(0);
        ListNode *ans = res;

        while (head)
        {
            int value = head->val;
            if (st.count(value) == 0)
            {
                res->next = new ListNode(value);
                res = res->next;
            }
            head = head->next;
        }
        return ans->next;
    }
};