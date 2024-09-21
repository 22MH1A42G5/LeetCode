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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast = head;
        int cnt=0;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            cnt++;
        }
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        if(size==1 || size==2){
            return;
        }
        temp=head;
        cnt--;
        while(cnt--){
            temp=temp->next;
        }
        ListNode* anot=temp->next;
        temp->next=NULL;
        ListNode* current = slow;
        ListNode *prev = NULL, *next = NULL;
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        slow = prev;
        cout<<slow->val;
        temp = head;
        int i = 0;
        while(temp!=NULL){
            ListNode* BC=new ListNode(slow->val);
            cout<<BC->val<<endl;
            slow=slow->next;
            BC->next=temp->next;
            temp->next = BC;
            temp=BC->next;
            i=0;
        }
        if(size%2==1){
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=anot;
        }
        return;
    }
};