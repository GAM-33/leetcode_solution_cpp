// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem2.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* pre = new ListNode(0);
        ListNode* res = pre;
        int add = 0;
        while(l1 != nullptr || l2 != nullptr) {
            int x = l1 == nullptr ? 0 : l1->val;
            int y = l2 == nullptr ? 0 : l2->val;
            int sum = x + y + add;
            add = sum / 10;
            sum = sum % 10;
            res->next = new ListNode(sum);
            res = res->next;
            if(l1 != nullptr) l1 = l1->next;
            if(l2 != nullptr) l2 = l2->next;
        }
        if(add == 1) res->next = new ListNode(1);
        return pre->next;
    }
};
// @lc code=end

