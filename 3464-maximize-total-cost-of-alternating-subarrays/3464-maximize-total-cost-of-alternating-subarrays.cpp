class Solution {
public:
    long long dp[100001][2];
    long long solve(int i, bool flag, vector<int>& nums) {
        if (i == nums.size()) {
            return 0;
        }
        if (dp[i][flag] != -1) {
            return dp[i][flag];
        }

        long long take = 0;
        if (flag) {
            take = nums[i] + solve(i + 1, !flag, nums);
        } else {
            take = -nums[i] + solve(i + 1, !flag, nums);
        }

        long long not_take =
            nums[i] + solve(i + 1, true, nums);
             return dp[i][flag] =  max(take, not_take);
              
    }

    long long maximumTotalCost(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return solve(0, true, nums);
    }
};