class Solution {
public:
int ans=0;
void solve(TreeNode* root,bool flag){
    if(root==NULL)
    {
        return ;
    }

    if(root->left==NULL && root->right==NULL&& !flag)
    {
        ans+=root->val;
    }
    solve(root->left,0);
    solve(root->right,1);
}
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root->left && !root->right){
            return 0;
        }
         solve(root,0);
         return ans;
        
    }
};