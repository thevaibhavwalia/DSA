class Solution {
public:
    int maxProduct(vector<int>& nums) {
    // use concept of prefix and suffix ;
    // calculate from starting to end and update the ans .
    // calculate from end to staring and that is suffix ;

    int ans=INT_MIN;
    int pref=1;
    int suff=1;
    for(int i=0;i<nums.size();i++){
        if(pref==0){
            pref=1;
        }
        pref=pref*nums[i];
        ans=max(pref,ans);
    

    }
    for(int i=nums.size()-1;i>=0;i--){
        if(suff==0){
            suff=1;
        }
        suff=suff*nums[i];
        ans=max(suff,ans);
    

    }
    return ans;

        
    }
};