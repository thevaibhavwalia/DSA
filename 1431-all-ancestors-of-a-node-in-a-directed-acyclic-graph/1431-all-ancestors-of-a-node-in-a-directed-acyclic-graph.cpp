class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> res(n);
        vector<vector<int>> adj(n);
        
        for (const auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
        }
        
        for (int i = 0; i < n; ++i) {
            vector<bool> visit(n, false);
            dfs(adj, i, i, res, visit);
        }
        
        for (int i = 0; i < n; ++i) {
            sort(res[i].begin(), res[i].end());
        }
        
        return res;
    }


    void dfs(vector<vector<int>>& adj, int parent, int curr, vector<vector<int>>& res, vector<bool>& visit) {
        visit[curr] = true;
        for (int dest : adj[curr]) {
            if (!visit[dest]) {
                res[dest].push_back(parent);
                dfs(adj, parent, dest, res, visit);
            }
        }
    }
};
