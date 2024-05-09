class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
    priority_queue<long long > pq;
    for(auto it:happiness){
        pq.push(it);
    }
    long long ans=0;
    int add=0;
    while(!pq.empty() && k){
        auto top=pq.top();
        pq.pop();
        if(top-add < 0){
            continue;
            
        }
        else{
            ans=ans+top-add;
            
        }
        
        add++;

        k--;
    }

    return ans;


        
    }
};