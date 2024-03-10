class BSTIterator {
public:
    vector<int> inorder;
int i;
void ino(TreeNode* root){
    if(!root){
        return;
    }
    ino(root->left);
    inorder.push_back(root->val);
    ino(root->right);
}
    BSTIterator(TreeNode* root) {
        i=0;
        ino(root);
        
    }
    
    int next() {
    int top= inorder[i];
    i++;
    return top;
       
    }
    
    bool hasNext() {
        return i<inorder.size();
        
    }
};

