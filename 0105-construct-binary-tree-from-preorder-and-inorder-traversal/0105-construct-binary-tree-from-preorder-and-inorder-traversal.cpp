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
 int pos(vector<int>& inorder, int start , int end , int key){
            for(int i=start; i<=end;i++)
                if(inorder[i] == key)
                    return i;
                    
            return -1;
        }
     int index=0;
TreeNode* solve(vector<int> &inorder,vector<int>& preorder, int instart,int inend)
{
  if(instart > inend  ){
    return NULL;
  }
            
        int element = preorder[index];
        index++;
        
        TreeNode* root= new TreeNode(element);
        int position = pos(inorder,instart,inend,element);
        
        root->left = solve(inorder,preorder,instart,position-1);
        root->right = solve(inorder,preorder,position+1,inend);
        
        return root;

}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         int preorderIndex=0;
         int n=inorder.size();
     
     TreeNode* ans= solve(inorder,preorder,0,n-1);
     return ans;
        
    }
};