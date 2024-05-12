class Solution {
public:
int solve(int row,int col,vector<vector<int>>& grid){
    int maxi=INT_MIN;
    int ul=grid[row-1][col-1];
    int lr=grid[row+1][col+1];
    int ur=grid[row-1][col+1];
    int l=grid[row][col-1];
    int r=grid[row][col+1];
    int ll=grid[row+1][col-1];
    int curr=grid[row][col];
    int up=grid[row-1][col];
    int low=grid[row+1][col];

    return max({ul,lr,ur,l,r,ll,curr,up,low});

}
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
    vector<vector<int>> ans(n-2,vector<int>(n-2));
        for(int i=1;i<n-1;i++){
            for(int j=1;j<n-1;j++){
                int val=solve(i,j,grid);
                ans[i-1][j-1]=val;

            }
        }
        return ans;
        
    }
};