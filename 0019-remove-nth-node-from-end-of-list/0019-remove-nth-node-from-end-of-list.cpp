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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int s=0;
        while(temp!=NULL){
            s++;
            temp=temp->next;
        }
        if(s==1){
            return NULL;
        }
        temp=head;
        cout<<s<<" ";
        int pos=s-n;
        cout<<pos;
        if(pos==0){
            temp=temp->next;
            return temp;
        }
        if(temp==NULL)
        return NULL;
        while(pos-1!=0 && temp->next!=NULL){
            temp=temp->next;
            pos--;
        }
        if(temp->next!=NULL)
            temp->next=temp->next->next;
        return head;

    }
};