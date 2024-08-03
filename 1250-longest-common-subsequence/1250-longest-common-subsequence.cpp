class Solution {
private:
    int func(string &text1, string &text2,int index1,int index2,vector<vector<int>> &dp){
        //base case
        if(index1<0 or index2<0) return 0;

        if(dp[index1][index2]!=-1) return dp[index1][index2];
        //rec case
        if(text1[index1]==text2[index2]){
            return dp[index1][index2]=1+func(text1,text2,index1-1,index2-1,dp);
        }
        else return dp[index1][index2]=max({func(text1,text2,index1-1,index2,dp),func(text1,text2,index1,index2-1,dp)});

    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();

        vector<vector<int>> dp(n,vector<int>(m,-1));
        return func(text1,text2,n-1,m-1,dp);
    }
};