class Solution {
public:
    // Solve the reverse version of this problem

    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};

    void dfs(int x,int y, vector<vector<int>> &adj,vector<vector<int>> &vis){
        vis[x][y]=1;
        
        for(int i=0;i<4;i+=1){
            int x1= dx[i]+x,y1=dy[i]+y;

            if(x1>=0 && y1>=0 && x1<adj.size() && y1<adj[0].size() && !vis[x1][y1] && adj[x1][y1] >= adj[x][y]){
                dfs(x1,y1,adj,vis);
            }
        }
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& adj) {
        int n=adj.size(),m=adj[0].size();

        vector<vector<int>> atlantic(n,vector<int>(m,0)),pacific(n,vector<int>(m,0));
        for(int i=0;i<m;i+=1){
            /* now here atalantic will store all the indexes which can go in pacific */
            dfs(0,i,adj,pacific);
            
            /* now it will give all the indexes which can go into atlantic */
            dfs(n-1,i,adj,atlantic);
        }

        for(int i=0;i<n;i+=1){
            /* for pacific */
            dfs(i,0,adj,pacific);

            /* for atlantic */
            dfs(i,m-1,adj,atlantic);
        }

        vector<vector<int>> ans;
        for(int i=0;i<n;i+=1){
            for(int j=0;j<m;j+=1){
                if(atlantic [i][j] == pacific[i][j] && pacific[i][j]==1){
                    ans.push_back({i,j});
                }
            }
        }

        return ans;
    }
};