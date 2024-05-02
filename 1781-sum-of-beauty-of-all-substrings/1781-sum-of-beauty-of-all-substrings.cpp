class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            unordered_map<char,int> umap;
            for(int j=i;j<s.length();j++){
                umap[s[j]]++;
                int maxi=INT_MIN;
                int mini=INT_MAX;
                for(auto it : umap){
                    maxi=max(maxi,it.second);
                    mini=min(mini,it.second);
                }
                ans+=maxi-mini;

            }
        }
        return ans;
        
    }
};