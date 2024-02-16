class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        unordered_map<int,int> umap;
        
   
        for(auto num : arr){
            umap[num]++;
        }
        
     
        for(auto it : umap){
            pq.push(it.second);
        }
        
 
        while(k > 0 && !pq.empty()){
            auto top_element = pq.top();
            pq.pop();
            
            if(top_element <= k){
                k -= top_element;
            } else {
                pq.push(top_element - k);
                k = 0;
            }
        }
        
   
        return pq.size();
    }
};
