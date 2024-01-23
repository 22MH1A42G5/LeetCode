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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int s=0,ans=0;
        while(temp!=NULL){
            s++;
            temp=temp->next;
        }
        s--;
        temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            ans+=temp->val*(pow(2,s));
            s--;
            temp=temp->next;
        }
        return ans;
    }
};