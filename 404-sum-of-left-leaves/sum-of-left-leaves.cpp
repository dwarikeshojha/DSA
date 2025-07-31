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
    void help(TreeNode* root,int &ans,bool fl){
        if(root==NULL) return;
        if(fl && root->left==nullptr && root->right==nullptr) ans+=root->val;
        help(root->left,ans,true);
        help(root->right,ans,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;
       help(root,ans,false);
       return ans; 
        
    }
};