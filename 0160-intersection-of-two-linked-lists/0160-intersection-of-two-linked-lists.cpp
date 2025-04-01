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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int ha=0,hb=0;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1!=NULL){
            ha++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            hb++;
            temp2=temp2->next;
        }
        int diff=abs(ha-hb);
        if(ha>hb){
            while(diff!=0){
                diff--;
                headA=headA->next;
            }
        }
        else{
            while(diff!=0){
                diff--;
                headB=headB->next;
            }
        }
        //cout<<maxi<<" "<<ha<<" "<<hb;
        while(headA!=NULL){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        
        return NULL;
    }
};
