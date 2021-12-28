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
          vector <int> nodes;
    int minDiffInBST(TreeNode* root) {
        

  
  
        TreeNode* tmp = root;
        getNodes(tmp);
        
        int diff = abs(nodes[0] - nodes[1]);
        if(nodes.size()==2) return abs(nodes[0] - nodes[1]);
        
        for(int i=0 ;i< nodes.size()-1 ; i++){
            if(abs(nodes[i] - nodes[i+1]) < diff){
              diff = abs(nodes[i] - nodes[i+1]) ;
            }
        }
        
        return diff;
        
    }
    
    void getNodes(TreeNode* root){
        if(root==NULL) return;
        getNodes(root->left);
        nodes.push_back(root->val);
        
        getNodes(root->right);
    }
};