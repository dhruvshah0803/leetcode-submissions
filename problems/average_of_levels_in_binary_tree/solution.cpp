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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> v;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            double sum =0;
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode* t = q.front();
                q.pop();
                sum+= t->val;
                
                if(t->right){
                    q.push(t->right);
                }
                if(t->left){
                    q.push(t->left);
                }
                
                
                
            }
            
            v.push_back(sum/(n)*1.00000);
        }
        return v;
    }
};