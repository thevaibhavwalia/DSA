/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0)
            return head;

        vector<int> ans;
        ListNode* temp = head;
        while (temp) {
            ans.push_back(temp->val); // Assuming 'data' is 'val' in ListNode
            temp = temp->next;
        }

        int n = ans.size();
        vector<int> rotated(n);
        for (int i = 0; i < n; i++) {
            rotated[(i + k) % n] = ans[i];
        }

        ListNode* result = new ListNode(rotated[0]);
        ListNode* current = result;
        for (int i = 1; i < n; i++) {
            ListNode* newNode = new ListNode(rotated[i]);
            current->next = newNode;
            current = newNode;
        }

        return result;
    }
};
