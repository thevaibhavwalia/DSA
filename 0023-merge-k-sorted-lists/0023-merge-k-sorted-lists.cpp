
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<>>pq;
        int n=lists.size();
        for(int i=0;i<n;i++){
            ListNode* curr=lists[i];
            while(curr){
          
                pq.push(curr->val);
            curr=curr->next;
                // lists[i]=lists[i]->next;
            }
        }
        ListNode *current = new ListNode(0);
        ListNode *dummy = current;
        while(!pq.empty()){
            current->next=new ListNode(pq.top());
            pq.pop();
            current=current->next;
        }
        return dummy->next;
    }
};