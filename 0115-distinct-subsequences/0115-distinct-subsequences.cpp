class Solution {
public:

int solve(string s, string t,int idx,int tidx,vector<vector<int>> &dp){
    if(idx > s.length()){
        return 0;
    }
    if(tidx >= t.length()){
        return 1;
    }

    if(dp[idx][tidx]!=-1){
        return dp[idx][tidx];
    }
    int take=0;
    if( s[idx]==t[tidx]){
        take=solve(s,t,idx+1,tidx+1,dp);
    }
    int not_take=solve(s,t,idx+1,tidx,dp);

    return dp[idx][tidx]=take+not_take;
}
    int numDistinct(string s, string t) {
        int m=s.length();
        int n=t.length();
        vector<vector<int>> dp(m+1, vector<int> (n+1, -1));
        return solve(s,t,0,0,dp);

        
    }
};