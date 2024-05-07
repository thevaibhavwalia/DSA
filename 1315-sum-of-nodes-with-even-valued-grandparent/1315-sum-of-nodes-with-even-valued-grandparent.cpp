class Solution {
public:
int sum=0;
void solve(TreeNode* root){
    if(!root){
        return;
    }
    if(root->val%2==0 && root->left){
        if(root->left->left){
            sum+=root->left->left->val;
        }
        if(root->left->right){
            sum+=root->left->right->val;

        }
    }
if(root->val%2==0 && root->right){
        if(root->right->left){
            sum+=root->right->left->val;
        }
        if(root->right->right){
            sum+=root->right->right->val;

        }
    }
    solve(root->left);
    solve(root->right);
}
    int sumEvenGrandparent(TreeNode* root) {
        solve(root);
        return sum;
        
    }
};