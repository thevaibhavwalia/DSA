class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long ans=0;
        int i=0;
        int j=0;
        int n=nums.size();
        int prev=-1;
        int curr=-1;
        while( j < n ){
            curr=nums[j];
            if(prev == curr){
                i=j;
            }

            prev=nums[j];
            ans+=j-i+1;
            j++;

        }
        return ans;
    }
};