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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL)
        return NULL;
        if(head->next==NULL)
        return head;
        ListNode* temp=head;
        while(temp->next!=NULL){
            int a=temp->val;
            int b=temp->next->val;
            ListNode* BC=new ListNode(__gcd(a,b));
            BC->next=temp->next;
            temp->next=BC;
            temp=temp->next->next;
        }
        return head;
    }
};