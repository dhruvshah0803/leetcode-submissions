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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        queue<TreeNode * > q;
        vector<vector<int>> v;
        if(root==NULL) return v;
        vector<int> temp;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            temp.clear();
            for(int i=0;i<n;i++){
            TreeNode * t = q.front();
            q.pop();
            
                temp.push_back(t->val);
                
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            v.push_back(temp);
            
        }
        return v;
    }
};