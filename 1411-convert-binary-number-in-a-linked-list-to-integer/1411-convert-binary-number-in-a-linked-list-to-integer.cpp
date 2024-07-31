
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int len=0;
        ListNode* temp=head;
        while(temp){
            len++;temp=temp->next;
        }
        int ans=0;
        len--;
        while(head){
            if(head->val == 1){
                cout<<ans<<endl;
                ans+=pow(2,len);
            }
            len--;
            head=head->next;

        }
        return ans;
    }
};