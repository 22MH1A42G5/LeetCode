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
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        if(head->next==NULL){
            return true;
        }
        if(head->next->next==NULL){
            if(head->val==head->next->val)
            return true;
            else
            return false;
        }
        while(fast!=NULL && fast->next!=NULL){
            
            fast=fast->next->next;
            slow=slow->next;
        }
        //cout<<slow->val;
        ListNode* temp=new ListNode(slow->val);
        slow=slow->next;
        ListNode* BC;
        while(slow!=NULL){
            BC=new ListNode(slow->val);
            BC->next=temp;
            slow=slow->next;
            temp=BC;
        }
        while(temp!=NULL){
            if(head->val==temp->val){
                temp=temp->next;
                head=head->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
};