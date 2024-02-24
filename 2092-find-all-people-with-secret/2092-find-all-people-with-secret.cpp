class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        vector<int> ans;
        unordered_map<int,vector<pair<int,int>>> adj;
        for(auto it:meetings){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> vis(n,0);
        pq.push({0,0});
        pq.push({0,firstPerson});
        while(!pq.empty()){
            auto [time,node]=pq.top();
            pq.pop();
            if(vis[node]==1){
                continue;
            }
            vis[node]=1;
            for(auto it :adj[node]){
                if(vis[it.first]) continue;
                if(it.second >= time){
                    pq.push({it.second,it.first});
                }
            }
        }

        for(int i=0;i<n;i++){
            if(vis[i]){
                ans.push_back(i);
            }
        }

        return ans;
        
        
    }
};