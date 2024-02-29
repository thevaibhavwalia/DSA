/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */



class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if (root == nullptr) return true;
        
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        
        while (!q.empty()) {
            int size = q.size();
            int oddLev = INT_MAX;
            int eveLev = INT_MIN;
            for (int i = 0; i < size; i++) {
                auto front = q.front().first;
                int level = q.front().second;
                q.pop();

                if (level % 2 == 0) {
                    if (front->val % 2 == 0) {
                        return false;
                    }
                    if (front->val > eveLev) {
                        eveLev = front->val;
                    } else {
                        return false;
                    }
                } else {
                    if (front->val % 2 == 1) {
                        return false;
                    }
                    if (front->val < oddLev) {
                        oddLev = front->val;
                    } else {
                        return false;
                    }
                }

                if (front->left) {
                    q.push({front->left, level + 1});
                }
                if (front->right) {
                    q.push({front->right, level + 1});
                }
            }
        }
        return true;
    }
};
