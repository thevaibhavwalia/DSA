
// } Driver Code Ends
/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
//Better 
class Solution{
  public:
    bool help(Node* root, int &level,int temp){
        if(!root)return 1;
        if(!root->left && !root->right){
            if(level!=-1){
                return level==temp;
            }else level=temp;
        }
        bool lh=help(root->left,level,temp+1);
        bool rh=help(root->right,level,temp+1);
        return rh&&lh;
    }
    
    bool check(Node *root)
    {
        int level=-1,temp=0;
        return help(root,level,temp);
    }
};
//Brute

class Solution{
  public:
    /*You are required to complete this method*/
    void solve(Node* root,vector<int>& lvl,int level){
        if(!root){
            return ;
        }
        if(!root->left && !root->right){
            lvl.push_back(level);
            return ;
            
        }
        solve(root->left,lvl,level+1);
        solve(root->right,lvl,level+1);
    }
    bool check(Node *root)
    {
        vector<int> lvl;
        solve(root,lvl,0);
        for(int i=1;i<lvl.size();i++){
            if(lvl[i]!=lvl[i-1]){
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
// Driver program to test size function
int main()
{
    int t;
    cin>> t;
    getchar();
    while (t--)
    {
        string s;
        getline( cin, s );
        Node* head = buildTree( s );
        Solution obj;
        cout << obj.check(head) << endl;
    }
    return 0;
}

// } Driver Code Ends
