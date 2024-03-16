class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> umap;
        umap[0]=-1;
        int sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+(nums[i]==0?-1:1);
            if(umap.find(sum)!=umap.end()){
                ans=max(ans,i-umap[sum]);
            }
            else{
                umap[sum]=i;
            }

        }
        return ans;
        
    }
};