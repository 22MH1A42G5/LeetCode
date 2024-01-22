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
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* temp = new ListNode(head->val);
        // temp->val = head->val;
        //temp->next = NULL;
        head=head->next;
        while(head!=NULL){
            ListNode* BC=new ListNode(head->val);
            BC->next=temp;
            temp=BC;
            head=head->next;
        }
        /*while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }*/
        head=temp;
        /*while(head!=NULL){
            cout<<head->val<<" ";
            head=head->next;
        }*/
        int maxi=0;
        if(temp==NULL) 
        return NULL;
        maxi=temp->val;
        while(temp->next!=NULL){
            if(temp->next->val>maxi){
                maxi=temp->next->val;
                temp=temp->next;
            }
            else if(temp->next->val<maxi){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        temp=new ListNode(head->val);
        temp=temp->next;
        while(head!=NULL){
            ListNode* BC=new ListNode(head->val);
            BC->next=temp;
            temp=BC;
            head=head->next;
        }
        return temp;
    }
};