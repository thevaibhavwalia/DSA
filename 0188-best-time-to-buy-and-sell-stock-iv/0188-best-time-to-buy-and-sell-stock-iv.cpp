class Solution {
public:
int n;
int dp[1001][101][2];
int solve( vector<int>& prices,int k,int buy,int idx){
    if(k == 0 || idx >=n){
        return 0;
    }
    if(dp[idx][k][buy]!=-1){
        return dp[idx][k][buy];
    }
    int not_take=solve(prices,k,buy,idx+1);
    int take;
    if(buy==0){
        take=solve(prices,k,1,idx+1)-prices[idx];
    }
    else{
        take=solve(prices,k-1,0,idx+1)+prices[idx];
    }
    return dp[idx][k][buy]=max(take,not_take);
}
    int maxProfit(int k, vector<int>& prices) {
        n=prices.size();
        memset(dp,-1,sizeof(dp));
        return solve(prices,k,0,0);
        
    }
};