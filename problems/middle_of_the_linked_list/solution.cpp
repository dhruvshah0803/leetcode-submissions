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
   ListNode* middleNode(ListNode* head) {
        ListNode *p= head, *q= head;
        if(p->next == NULL)
            return p;
        if(p->next->next== NULL)
            return p->next;
        while(q){
            q= q->next;
            if(q)p = p->next;
            if(q)q =q->next;
        }
        return p;
        
        
        
    }
};