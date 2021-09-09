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
    void recurse(TreeNode* root){
        if(!root) return;
       swap(root->right,root->left);
        recurse(root->left);
        recurse(root->right);

    }
    
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        recurse(root);
        return root;
    }
};