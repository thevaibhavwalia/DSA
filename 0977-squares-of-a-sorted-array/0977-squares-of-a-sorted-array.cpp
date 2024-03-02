class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        vector<int>  ans(nums.size());
        int j=nums.size()-1;
        int k=j;
        while(i <= j){
            if(abs(nums[i]) > abs(nums[j])){
                ans[k]=nums[i];
                i++;
            }
            else{
                ans[k]=nums[j];
                j--;
                
            }
            k--;
        }
        for(int i=0;i<nums.size();i++){
            ans[i]=ans[i]*ans[i];
        }

        return ans;
        
    }
};