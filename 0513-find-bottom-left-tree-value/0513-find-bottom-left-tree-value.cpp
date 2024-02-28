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
    int ans=0;
    int maxLevel;
    void solve(TreeNode* root,int level){
        if(!root){
            return ;
        }
        

        if(level > maxLevel){
            maxLevel=level;
            ans=root->val;
        }
    solve(root->left,level+1);
        
        solve(root->right,level+1);
        
    }
    int findBottomLeftValue(TreeNode* root) {
        maxLevel=-1;
        solve(root,0);
        return ans;
        
    }
};