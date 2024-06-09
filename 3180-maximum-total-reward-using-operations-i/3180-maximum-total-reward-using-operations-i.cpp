class Solution {
public:
int dp[2001][4001];
int solve(vector<int>& nums,int idx,int sum){
    if(idx >= nums.size()){
        return 0;
    }
    if(dp[idx][sum]!=-1){
        return dp[idx][sum];
    }
    int not_take=solve(nums,idx+1,sum);
    int take=0;
    if(sum==0 || sum < nums[idx]){
        take=nums[idx]+solve(nums,idx+1,sum+nums[idx]);
        
    }
    return dp[idx][sum]=max(take,not_take);
}
    int maxTotalReward(vector<int>& nums) {
        sort(begin(nums),end(nums));
        memset(dp,-1,sizeof(dp));        
        return solve(nums,0,0);
        
    }
};