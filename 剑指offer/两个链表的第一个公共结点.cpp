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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        ListNode* pa = pHead1;
        ListNode* pb = pHead2;
        while(pa!=pb) {
            pa = pa? pa->next : pHead2;
            pb = pb? pb->next : pHead1;
        }
        return pa;
    }
};