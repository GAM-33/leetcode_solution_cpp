/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead) {
        ListNode* dummy = new ListNode(0);
        dummy->next = pHead;
        ListNode* pre = dummy, *cur = pHead;
        while(cur){
            if(cur->next && cur->val == cur->next->val){
                while(cur->next && cur->val == cur->next->val){
                    cur = cur->next;
                }
                cur = cur->next;
                pre->next = cur;
            }
            else{
                pre = cur;
                cur = cur->next;
            }
        }
        return dummy->next;
    }
};