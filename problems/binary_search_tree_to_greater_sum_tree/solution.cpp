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
    TreeNode* bstToGst(TreeNode* root) {
        vector<int> v;
        getvec(root,v);
        sort(v.begin(),v.end());
        recurse(root,v);
        return root;
        
    }
    
   void getvec(TreeNode* root,vector<int> &v) {
        if(root==NULL) return;
        v.push_back(root->val);
        getvec(root->left,v);
       getvec(root->right,v);
       
        
    }
    void recurse(TreeNode* root,vector<int> &v ){
        if(root==NULL) return;
        int rep=0;
        for(int i=0;i<v.size();i++){
            if(v[i] >= root->val) rep+=v[i] ;
        }
        root->val = rep;
        recurse(root->left,v);
        recurse(root->right,v);
        
    }
};