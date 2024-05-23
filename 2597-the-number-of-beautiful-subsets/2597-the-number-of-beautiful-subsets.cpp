class Solution {
public:
    int count = 0;
    bool isBeautify(vector<int>& temp, int k) {
        int n = temp.size();
        if (n == 1) {
            return true;
        }
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (i == j) {
                    continue;
                }
                if (abs(temp[i] - temp[j]) == k) {
                    return false;
                }
            }
        }
        return true;
    }
    void solve(vector<int>& nums, int k, vector<int>& temp, int idx) {

        if (idx == nums.size()) {
            if (isBeautify(temp, k)) {
                count++;
            }
            return;
        }
        temp.push_back(nums[idx]);
        solve(nums, k, temp, idx + 1);
        temp.pop_back();
        solve(nums, k, temp, idx + 1);
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        vector<int> temp;
        solve(nums, k, temp, 0);
        return count-1;

    
    }
};