// class Solution {
// public:
//     long long maximumHappinessSum(vector<int>& happiness, int k) {
//     priority_queue<long long > pq;
//     for(auto it:happiness){
//         pq.push(it);
//     }
//     long long ans=0;
//     int add=0;
//     while(!pq.empty() && k){
//         auto top=pq.top();
//         pq.pop();
//         if(top-add < 0){
//             continue;
            
//         }
//         else{
//             ans=ans+top-add;
            
//         }
        
//         add++;

//         k--;
//     }

//     return ans;


        
//     }
// };

class Solution {
public:
    long long maximumHappinessSum(vector<int>& hapiness, int k) {
        long long ans = 0;
        sort(hapiness.begin(),hapiness.end(),greater<int>());
        int val=0;
        for(int i=0; i<k; i++){
            
            ans+=max(0,hapiness[i]-val);
            val++;
        }
        return ans;
    }
};