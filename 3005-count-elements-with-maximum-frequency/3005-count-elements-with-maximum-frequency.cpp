class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> umap;
        for(auto it:nums){
            umap[it]++;
        }
        int maxi=0;
        for(auto it:umap){
            if(it.second > maxi){
                maxi=it.second;
            }

        }
        for(auto it:umap){
            if(it.second == maxi){
                ans+=it.second;
            }

        }

        return ans;


        
    }
};