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
    int countNodes(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int count=0;
        while(q.size()){
            TreeNode* temp=q.front();
            if(temp) count++;
            q.pop();
            if(temp==NULL) continue;
            else{
                q.push(temp->left);
                q.push(temp->right);
            }
        }
        return count;
    }
};