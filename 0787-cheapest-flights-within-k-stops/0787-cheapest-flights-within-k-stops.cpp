class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> dist(n,INT_MAX);
        unordered_map<int,vector<pair<int,int>>> adj;
        for(auto it:flights){
            adj[it[0]].push_back({it[1],it[2]});
        }
        queue<pair<int,int>> q;
        q.push({src,0});
        dist[src]=0;
        while(!q.empty() && k >= 0) {
        int sz = q.size(); 
    for (int i = 0; i < sz; i++) {
                int front=q.front().first;
                int dis=q.front().second;
                q.pop();
                
                for(auto it : adj[front]){
                    if(dist[it.first] > dis + it.second){
                        dist[it.first]=dis+it.second;
                        q.push({it.first,dis+it.second});
                    }
                }
              
                
                
            }
              k--;
            
        }
        return dist[dst]==INT_MAX?-1:dist[dst];
        
    }
};