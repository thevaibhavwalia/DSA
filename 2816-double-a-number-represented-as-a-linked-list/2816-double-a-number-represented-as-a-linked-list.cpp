class Solution {
public:
ListNode* reverse(ListNode* head){
    ListNode* prev=NULL;
    ListNode* next;
    while(head){
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
}
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp=reverse(head);
        int carry=0;
  
        ListNode* ans=new ListNode(0);
        ListNode* final=ans;
  
        while(temp || carry){
            int sum=0;
            if(temp){
                sum=temp->val*2;
           
                temp=temp->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode* val=new ListNode(sum%10);
            final->next=val;
            final=val;
           
        }
        return reverse(ans->next);
       
    }
};