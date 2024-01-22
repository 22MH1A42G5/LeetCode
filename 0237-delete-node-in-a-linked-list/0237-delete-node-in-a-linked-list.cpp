/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        //ListNode* temp=node;
        //ListNode* temp1=node->next;
        int l=node->next->val;
        node->next=node->next->next;
        node->val=l;

    }
};