class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long  ans=0;
        long long  sum = 0;
        sort(begin(nums),end(nums));
        for(int i=0;i<nums.size();i++){
            if(sum > nums[i]){
                ans=sum+nums[i];
                
            }
            sum+=nums[i];
        }
        return ans == 0 ?-1:ans;
        
    }
};