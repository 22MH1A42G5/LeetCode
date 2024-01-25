/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
        return NULL;
        if(head->next==NULL)
        return NULL;
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                break;
            }
        }
        if(fast==NULL || fast->next==NULL)
        return NULL; 
        ListNode* temp=head;
        while(temp!=fast){
            temp=temp->next;
            fast=fast->next;
        }
        return temp;
    }
};