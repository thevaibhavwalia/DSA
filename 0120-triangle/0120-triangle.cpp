class Solution {
public:
int dp[201][201];
int solve(vector<vector<int>>& triangle,int row,int idx){
    if(row >= triangle.size()){
        return 0;
    }
    if(dp[row][idx]!=-1){
        return dp[row][idx];
    }
    int just_below=triangle[row][idx]+solve(triangle,row+1,idx);
    int below_right=triangle[row][idx]+solve(triangle,row+1,idx+1);

    return dp[row][idx]=min(just_below,below_right);

}
    int minimumTotal(vector<vector<int>>& triangle) {
        memset(dp,-1,sizeof(dp));
        return solve(triangle,0,0);
        
    }
};