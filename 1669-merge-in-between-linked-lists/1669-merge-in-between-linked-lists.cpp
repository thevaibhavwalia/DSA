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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* bNode=list1;
        ListNode* aNode=list1;
        for(int i=0;i<b+1;i++){
            bNode=bNode->next;

        }
        for(int i=0;i<a-1;i++){
            aNode=aNode->next;
        }
        ListNode* temp=list2;
        while(temp->next){
            temp=temp->next;  
        }
        aNode->next=list2;
        temp->next=bNode;

        return list1;
        
    }
};