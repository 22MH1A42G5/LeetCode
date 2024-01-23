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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(head->next==NULL || head==NULL){
            return NULL;
        }
        while(fast!=NULL && fast->next!=NULL){
            if(fast->next->next==NULL){
                slow=slow->next;
                break;
            }
            fast=fast->next->next;
            slow=slow->next;
        }
        cout<<slow->val;
        ListNode* temp=head;
        while(temp->next!=slow){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};