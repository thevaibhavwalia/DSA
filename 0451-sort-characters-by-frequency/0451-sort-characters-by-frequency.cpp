class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> umap;
        for(auto it : s){
            umap[it]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it:umap){
            pq.push({it.second,it.first});
        }
        string ans="";
        while(!pq.empty()){
            int val=pq.top().first;
            char ch=pq.top().second;
            pq.pop();
            for(int i=0;i<val;i++){
                ans+=ch;
            }  
        }
        return ans;



        
    }
};