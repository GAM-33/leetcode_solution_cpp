/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead) {
        if(pHead == NULL) return NULL;
        unordered_map<RandomListNode*, RandomListNode*> hashmap;
        RandomListNode* dummy = new RandomListNode(0);
        RandomListNode* pre = dummy, *cur = pHead;
        while(cur){
            RandomListNode* clone = new RandomListNode(cur->label);
            pre->next = clone;
            hashmap[cur] = clone;
            pre = pre->next;
            cur = cur->next;
        }
        for(auto& [key, value] : hashmap){
            value->random = key->random == NULL ? NULL : hashmap[key->random];
        }
        delete dummy;
        return hashmap[pHead];
    }
};