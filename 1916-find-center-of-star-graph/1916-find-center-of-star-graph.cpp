class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> v(edges.size() + 2, 0);
        for(auto it : edges) {
            v[it[0]]++;
            v[it[1]]++;
        }

        for(int i = 1; i < v.size(); i++) {
            if(v[i] == edges.size()) {
                return i;
            }
        }

        return -1;
    }
};
