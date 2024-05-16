
class Solution {
public:

bool solve(TreeNode* root){
    if( !root->left && !root->right){
        return root->val==0?false:true;
    }

    bool left=solve(root->left);
    bool right=solve(root->right);

    if(root->val == 2){
        return left || right;
    }
    return left && right;


}
    bool evaluateTree(TreeNode* root) {

        return solve(root);
        
    }
};