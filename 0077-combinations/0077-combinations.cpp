class Solution {
public:
void help(int i, int n, int k, vector<int> &subSet, vector<vector<int>> &ans)
{
    // If k is equal to 0, we have generated a Valid Subset of K length

    if (k == 0)
    {
        ans.push_back(subSet);
        return;
    }



    // if (k > n - i + 1)
    //     return;



    if (i > n)
        return;

  

    subSet.push_back(i);
   
    // Ask Recursion to do the Rest of the Task

    help(i + 1, n, k - 1, subSet, ans);

    // Backtrack and undo the change
    subSet.pop_back();

    // Don't pick the i-th Element

    help(i + 1, n, k, subSet, ans);
}
    
public:
    vector<vector<int>> combine(int n, int k) {
        
    vector<vector<int>> ans ;
    vector<int> subSet  ;
        
    help(1 , n , k , subSet , ans) ;
        
    return ans ;
}
};