
class BSTIterator {
public:
stack<int> inorder;
int i=0;
void ino(TreeNode* root){
    if(!root){
        return;
    }
    ino(root->right);
    inorder.push(root->val);
    ino(root->left);
}
    BSTIterator(TreeNode* root) {
        ino(root);
        
    }
    
    int next() {
        int top=inorder.top();
        inorder.pop();
        return top;
       
    }
    
    bool hasNext() {
        return !inorder.empty();
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */