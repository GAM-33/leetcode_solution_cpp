/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution1 {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> result;
        while(head){
            result.push_back(head->val);
            head = head->next;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

class Solution2 {
public:
    vector<int> result;
    void Rev(ListNode* head) {
        if(head == NULL) return;
        Rev(head->next);
        result.push_back(head->val);
    }
    vector<int> printListFromTailToHead(ListNode* head) {
        Rev(head);
        return result;
    }
};