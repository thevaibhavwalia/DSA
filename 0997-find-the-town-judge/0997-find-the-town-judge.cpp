class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1){
            return 1;
        }
        unordered_map<int,int> umap;
        for(auto it:trust){
            umap[it[1]]++;
            umap[it[0]]--;
            
        }
        for(auto it:umap){
            if(it.second == n-1){
                return it.first;
            }
        }
        return -1;
        
    }
};