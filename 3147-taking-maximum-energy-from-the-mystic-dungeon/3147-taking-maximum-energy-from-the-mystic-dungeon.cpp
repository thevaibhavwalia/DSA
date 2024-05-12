class Solution {
public:
int dp[100001]; 
int n;
int solve(vector<int>& energy,int idx,int k){
    if(idx >= n){
        return 0;
    }
    if(dp[idx]!=-1){
        return dp[idx];
    }
    int take=energy[idx]+solve(energy,idx+k,k);

    return dp[idx]=take;
}
    int maximumEnergy(vector<int>& energy, int k) {
        n=energy.size();
        memset(dp,-1,sizeof(dp));
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(ans,solve(energy,i,k));
        }
        return ans;
        
    }
};