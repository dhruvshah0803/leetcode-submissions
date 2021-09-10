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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int n=1,m=1;
        ListNode* ptr1 = list1;
        ListNode* tempa=0;
        ListNode* tempb=0;
        ListNode* ptr2 = list2;
        while(ptr1->next!=NULL){
          
            if(n==a) tempa = ptr1;
            if(n==b+1) tempb = ptr1->next;
              n++;
            ptr1 = ptr1->next;
        }
         while(ptr2->next!=NULL){
            m++;
            ptr2 = ptr2->next;
        }
         ptr2->next = tempb;
        
        tempa->next = list2;
       
        return list1;
        
        
    }
};