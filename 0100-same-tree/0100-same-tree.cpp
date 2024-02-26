

class Solution {
public:
bool solve(TreeNode* p,TreeNode* q){
    if(p==NULL && q==NULL){
        return true;
    }
    if(p==NULL && q!=NULL){
        return false;
    }
    if(p!=NULL && q==NULL){
        return false;
    }
    if(p->val != q->val){
        return false;
    }
    bool a=solve(p->left,q->left);
    bool b=solve(p->right,q->right);

    return a&&b;
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return solve(p,q);
        
    }
};