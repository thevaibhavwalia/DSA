class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int> umap1,umap2;
        for(int i=0;i<s.length();i++){
            umap1[s[i]]=i;
            umap2[t[i]]=i;
        }


    int ans=0;
        for(int i=0;i<s.length();i++){
        
            char val=s[i];

            ans+=abs(umap1[val]-umap2[val]);

        }
        return ans;
        
    }
};