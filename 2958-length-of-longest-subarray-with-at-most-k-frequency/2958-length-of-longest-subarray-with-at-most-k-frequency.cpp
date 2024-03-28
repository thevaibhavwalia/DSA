class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        int i=0;
        int j=0;
        int ans=0;
        while(j < nums.size()){
            umap[nums[j]]++;
            while(umap[nums[j]] > k){
                umap[nums[i]]--;
                
                i++;
            }
            ans=max(ans,j-i+1);
            j++;

        }
        return ans;
        
    }
};