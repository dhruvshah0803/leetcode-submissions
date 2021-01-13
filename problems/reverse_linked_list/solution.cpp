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
    ListNode* reverseList(ListNode* head) {
    struct ListNode *cur=head;
    struct ListNode *nextptr=head;
    struct ListNode *prev=NULL;
while(nextptr!=0){
    nextptr=cur->next;
    cur->next=prev;
    prev=cur;
    cur=nextptr;
}
    head=prev;
    return head;
    }
};