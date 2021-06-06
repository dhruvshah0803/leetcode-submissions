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
    int getDecimalValue(ListNode* head) {
        ListNode* ptr = head;
        int size=0;
        while(ptr!=NULL){
            size++;
            ptr = ptr->next;
        }
ptr = head;
        int sum=0;
        size--;
        while(ptr!=NULL){
            sum += (ptr->val)*pow(2,size);
            ptr = ptr->next;
            size--;
        }
     return sum;   
    }
};