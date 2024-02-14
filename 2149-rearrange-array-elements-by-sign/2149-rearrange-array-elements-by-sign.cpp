class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int plus=0;
        int neq=1;
        int k=0;
        vector<int> ans(nums.size());
        while(k < nums.size()){
            if(nums[k] > 0){
                ans[plus]=nums[k];
                plus+=2;
                
            }
            else{
                ans[neq]=nums[k];
                neq+=2;
            }
            k++;
            
            
        }
        return ans;
        
    }
};