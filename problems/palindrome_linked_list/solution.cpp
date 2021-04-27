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
    bool isPalindrome(ListNode* head) {
        ListNode* p = head;
        vector<int> v;
        while(p){
            v.push_back(p->val);
            p=p->next;
        }
        int n=v.size();
        int f=0;
        for(int i=0;i<n/2;i++){
            if(v[i]!=v[n-1-i]) f++;
        }
        if(f==0) return true;
        else return false;
        
    }
};