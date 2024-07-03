class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if (n <= 4) {
            return 0;
        }

        sort(nums.begin(), nums.end());

        // We have four options:
        // 1. Change the three largest elements (smallest three remain the same)
        // 2. Change the two largest elements and the smallest element
        // 3. Change the largest element and the two smallest elements
        // 4. Change the three smallest elements (largest three remain the same)
        
        int option1 = nums[n - 1] - nums[3];
        int option2 = nums[n - 2] - nums[2];
        int option3 = nums[n - 3] - nums[1];
        int option4 = nums[n - 4] - nums[0];
        
        return min({option1, option2, option3, option4});
    }
};
