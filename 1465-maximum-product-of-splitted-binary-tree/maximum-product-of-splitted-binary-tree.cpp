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
    #define mod 1000000007
    long long max_prod=1;
    long long tsum(TreeNode* root){
        if(root==NULL) return 0;
        int left=tsum(root->left);
        int right=tsum(root->right);
        return root->val+left+right;
    }
    long long help(TreeNode* root,long long msum ){
        if(root==NULL) return 0;
        long long lsum=help(root->left,msum);
        long long rsum=help(root->right,msum);
        long long subtree=root->val+lsum+rsum;
        max_prod=max(max_prod,subtree*(msum-subtree));
        return subtree;

    } 
    int maxProduct(TreeNode* root) {
        long long msum=tsum(root);
        help(root,msum);
        return (max_prod)%mod;
    }
};