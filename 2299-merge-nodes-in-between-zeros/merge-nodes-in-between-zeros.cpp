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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* temp = head;
        ListNode* ans=temp1;
        ListNode* prev;
        int s = 0;
        temp=temp->next;
        while(temp != NULL){
            s += temp->val;
            if(temp->val == 0){
                prev = temp1;
                temp1->val = s;
                temp1=temp1->next;
                s=0;
            }
            temp = temp->next;
        }
        prev->next = NULL;
        return ans;
    }
};