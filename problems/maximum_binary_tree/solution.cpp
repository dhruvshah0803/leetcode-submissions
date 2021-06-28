/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* recurse(int start, int end, vector<int>& nums ){
        if(start>end) return NULL;
        
        int pos=0;
        int maxnum= -1;
   
        int n = nums.size();
        for(int i=start;i<=end;i++){
           if(nums[i]>maxnum) {
           maxnum  = nums[i];
               pos = i;
           }
        }
        TreeNode * root = new TreeNode;
    
        root->val = maxnum;
        root->left = recurse(start,pos-1,nums);
        root->right = recurse(pos+1,end,nums);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
       return recurse(0,nums.size()-1,nums);
    }
    
    
    
};