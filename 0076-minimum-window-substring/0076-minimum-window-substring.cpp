class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map<char,int> umap;
        int count=0;
        for(auto ch:t){
            count++;
            
            umap[ch]++;
        }
        int i=0;
        int j=0;
        int ans=INT_MAX;
        int start=-1;
        while(j<s.length()){
            if(umap[s[j]]>0){
                count--;
            }
                umap[s[j]]--;
            while(count==0){
                if(j-i+1 < ans){
                    ans=j-i+1;
                    start=i;
                }
                umap[s[i]]++;
                if(umap[s[i]]>0){
                    count++;
                    
                }
                i++;
            }
            j++;
            
        }
        return ans==INT_MAX?"":s.substr(start,ans);
        
        
    }
};