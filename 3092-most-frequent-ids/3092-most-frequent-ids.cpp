#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        priority_queue<pair<long long, long long>> pq;
        int n = nums.size();
        unordered_map<long long, long long> umap; // Change key type to long long
        vector<long long> ans;
        for (int i = 0; i < n; i++) {
            umap[nums[i]] += freq[i]; // Update frequency
            pq.push({umap[nums[i]], nums[i]}); // Push to priority queue
            
            // Remove outdated entries from the priority queue
            while (!pq.empty() && umap[pq.top().second] != pq.top().first) {
                pq.pop();
            }
            
            if (pq.empty())
                ans.push_back(0); // Collection is empty
            else
                ans.push_back(pq.top().first); // Most frequent ID count
        }
        return ans;
    }
};
