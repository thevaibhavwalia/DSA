class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);  
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto it:arr){
            pq.push({abs(it-x),it});
        }
            vector<int>  ans;
        while(!pq.empty() && k){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        sort(begin(ans),end(ans));
        return ans;
        
    }
};