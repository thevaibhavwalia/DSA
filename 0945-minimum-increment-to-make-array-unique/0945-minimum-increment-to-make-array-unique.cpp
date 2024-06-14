class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        
        sort(begin(nums),end(nums));
        int count=0;
        for(int i=1;i<nums.size();i++){
            if (nums[i] <= nums[i - 1]) {
                int val = nums[i - 1] - nums[i] + 1;
                nums[i] += val;
                count += val;
            }

        }
        return count;
    }
};