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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* temp=new ListNode();
        ListNode* ans=temp;
        ListNode* BC;
        while(l1!=NULL && l2!=NULL){
            if(l1->val<l2->val){
                ans->next=new ListNode(l1->val);
                ans=ans->next;
                l1=l1->next;
            }
            else{
                BC=new ListNode(l2->val);
                ans->next=BC;
                ans=ans->next;
                l2=l2->next;
            }
        }
        while(l1!=NULL){
            BC=new ListNode(l1->val);
            ans->next=BC;
            ans=ans->next;
            l1=l1->next;
        }
        while(l2!=NULL){
            BC=new ListNode(l2->val);
            ans->next=BC;
            ans=ans->next;
            l2=l2->next;
        }
        return temp->next;
    }
};