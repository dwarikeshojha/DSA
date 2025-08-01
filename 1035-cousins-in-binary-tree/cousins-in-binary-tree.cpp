
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        unordered_map<int,int> mp;
        queue<TreeNode*> q;
        q.push(root);
        int lvl=0;
        while(q.size()){
            int l=q.size();
            while(l--){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left!=nullptr && temp->right!=nullptr){
                    if((temp->left->val==x && temp->right->val==y) || (temp->left->val==y && temp->right->val==x)) return false;
                }
                mp[temp->val]=lvl;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            lvl++;
        }
        return mp[x]==mp[y];
    }
};