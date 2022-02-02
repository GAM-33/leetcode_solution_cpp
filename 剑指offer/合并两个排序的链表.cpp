/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
        ListNode* mHead = new ListNode(0);
        ListNode* tmp = mHead;
        while(pHead1 && pHead2){
            if(pHead1->val <= pHead2->val){
                mHead->next = pHead1;
                pHead1 = pHead1->next;
            }
            else{
                mHead->next = pHead2;
                pHead2 = pHead2->next;
            }
            mHead = mHead->next;
        }
        if(pHead1) mHead->next = pHead1;
        else mHead->next = pHead2;
        return tmp->next;
    }
};