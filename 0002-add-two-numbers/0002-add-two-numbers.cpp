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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL){
            return NULL;
        }
        if(l2==NULL){
            return NULL;
        }
        int car=0,v,s;
        ListNode* BC;
        ListNode* ans=new ListNode();
        ListNode* temp=ans;
        while((l1!=NULL || l2!=NULL) || car!=0){
            int a=0;
            int b=0;
            if(l1!=NULL){
                a=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                b=l2->val;
                l2=l2->next;
            }
            v=a+b+car;
            s=(v%10);
            car=v/10;
            BC=new ListNode(s);
            temp->next=BC;
            temp=temp->next;
        }
        return ans->next;
    }
};