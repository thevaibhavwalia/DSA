class Solution {
public:
    
    // declare a 2D dp array
    
    vector<vector<int>> dp;
    
    int helper(string &str, int low, int high)
    {
        // base case
        
        if(low >= high)
            return 0;
        
        // if already calculated
        
        if(dp[low][high] != -1)
            return dp[low][high];
        
        if(str[low] == str[high])
            return dp[low][high] = helper(str, low + 1, high - 1);
        else
        {
            return dp[low][high] = 1 + min(helper(str, low + 1, high), helper(str, low, high - 1));
        }
        
    }
    
    int minInsertions(string str) {
        
        int n = str.size();
        
        int low = 0;
        
        int high = n - 1;
        
        // resize dp
        
        dp.resize(n + 1);
        
        // initialize dp
        
        dp.assign(n + 1, vector<int> (n + 1, -1));
        
  
        
        return helper(str, low, high);
    }
};