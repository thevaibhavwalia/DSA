class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;
        for(auto it:strs){
           string word=it;
            sort(begin(word),end(word));
            umap[word].push_back(it);
            
        }
            vector<vector<string>>  ans;
        for(auto it:umap){
            ans.push_back(it.second);   
        }
        return ans;
    }
};