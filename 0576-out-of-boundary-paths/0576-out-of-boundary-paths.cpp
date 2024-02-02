class Solution {
public:
#define M 1000000007;
int dp[51][51][51];
int solve(int m, int n, int maxMove, int i, int j){
    if(i>= m || j>=n || i<0 || j<0){
        return 1;
    }
    if(maxMove <= 0){
        return 0;
    }
    if(dp[maxMove][i][j]!=-1){
        return dp[maxMove][i][j];
    }
    long long  down=solve(m,n,maxMove-1,i+1,j)%M;
    long long  right=solve(m,n,maxMove-1,i,j+1)%M;
    long long  left=solve(m,n,maxMove-1,i,j-1)%M;
    long long  top=solve(m,n,maxMove-1,i-1,j)%M;

    return dp[maxMove][i][j]=(down+right+left+top)%M;
}
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp));
        return solve(m,n,maxMove,startRow,startColumn);
    }
};