class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        unordered_map<int, int> mp;
        for (auto it : roads) {
            mp[it[0]]++;
            mp[it[1]]++;
        }
       int count = 1;
        for (int i = 0; i < n; ++i) {
            if (mp.find(i)==mp.end()) {
                mp[i]=0;
               
               
            }
        }

        map<int, vector<int>> umap;
        for (auto it : mp) {
            umap[it.second].push_back(it.first);
        }

        unordered_map<int, int> mp1;
       
        for (auto it : umap) {
            for (auto vec : it.second) {
                mp1[vec] = count;
                count++;
            }
        }
        long long ans = 0;
        for (auto it : roads) {
            ans += mp1[it[0]] + mp1[it[1]];
        }
        return ans;
    }
};