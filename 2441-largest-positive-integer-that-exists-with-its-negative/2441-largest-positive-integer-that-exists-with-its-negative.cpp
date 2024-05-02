class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int, bool> umap;
        int ans = INT_MIN;
        sort(begin(nums),end(nums));
        for (auto it : nums) {
            if (umap.find(-it) != umap.end()) {
                ans = max(ans, it);
            }
            if (it < 0) {
                umap[it] = true;
            }
        }

        return ans==INT_MIN?-1:ans;
    }
};