class Solution {
public:
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {

        unordered_set<int> visited(forbidden.begin(),forbidden.end());
        
        queue<pair<int,int>> q;  // here second value is what last move was taken
        q.push({0,1});          // 1 for to the right and -1 for left
        visited.insert(0);
        
        int level=0;
        while(!q.empty())
        {
            level++;
            int size=q.size();
            
            while(size--)
            {
                int u,lastMove;
                tie(u,lastMove)=q.front();
                q.pop();
                
                if(u==x)
                    return level-1;
                
                int forward=u+a;
                int backward=u-b;
                
                if(forward<=6000 && visited.find(forward)==visited.end())
                {
                    q.push({forward,1});
                    visited.insert(forward);  
                }
                
                if(lastMove==1 && backward>=0 && visited.find(backward)==visited.end() )
                {
                     q.push({backward,-1});
                }
                
            }
        }
        
        return -1;
    }
};