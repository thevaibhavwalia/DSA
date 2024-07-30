class Solution {
    map<int, map<int, vector<int>>> mymap;

    void solve(TreeNode* curr, int col, int row) {
        if (!curr)
            return;

        mymap[col][row].push_back(curr->val);
        solve(curr->left, col - 1, row + 1);
        solve(curr->right, col + 1, row + 1);
    }

public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        solve(root, 0, 0);

        vector<vector<int>> ans;

        for (auto m1 : mymap) {
            ans.push_back(vector<int>());
            for (auto m2 : m1.second) {
                sort(begin(m2.second),end(m2.second));
                for (auto m3 : m2.second) {
                    ans.back().push_back(m3);
                    cout << m3 << endl; 
                }
            }
        }
        return ans; 
    }
};