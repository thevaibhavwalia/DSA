class Solution {
public:
int ans=INT_MIN;
int solve(TreeNode* root){
    if(!root){
        return 0;
    }

    int left=max(0,solve(root->left));
    int right=max(0,solve(root->right));

    ans=max(ans,root->val+left+right);

    return max(left,right)+root->val;
}
    int maxPathSum(TreeNode* root) {
        solve(root);
        return ans;
        
    }
};