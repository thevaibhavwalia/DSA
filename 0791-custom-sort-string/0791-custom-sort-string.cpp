class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        string extra="";
        unordered_map<char,int> umap;
        unordered_map<char,int> umapo;
        
        for(auto it : order){
            umapo[it]++;
        }
        for(auto it : s){
            if(umapo.find(it)!=umapo.end()){

            umap[it]++;
            }
            else{
                extra+=it;
            }
     
        }
        for(auto it:order){
            if(umap.find(it)!=umap.end()){
                while(umap[it] > 0){
                ans+=it;
                umap[it]--;
                }
                
            }
            else{
                continue;
            }
        }

        return ans+extra;
    }
};