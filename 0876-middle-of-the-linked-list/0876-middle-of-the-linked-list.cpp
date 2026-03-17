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
    ListNode* middleNode(ListNode* head) {
        ListNode *rab = head;
        ListNode *tort = head;
        int len = 0;
        while(tort != nullptr) {
            len++;
            tort = tort->next;
        }
        tort = head;
        while(rab != NULL && rab->next != NULL) {
            // if(rab-> next == NULL) break;
            rab = rab->next->next;
            tort = tort->next;
        }
        // if(len % 2 == 0){
        //     if(tort == NULL) {
        //         return NULL;
        //     }
        //     return tort->next;
        // }
        return tort;
    }
};