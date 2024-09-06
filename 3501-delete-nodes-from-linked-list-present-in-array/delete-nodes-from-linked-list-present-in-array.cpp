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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=1;
        }
        ListNode* pre=NULL,*tempo=head;
        while(tempo!=NULL){
            if(mp[tempo->val]==1){
                head=head->next;
                tempo=tempo->next;
            }
            else
                break;
        }
        pre=tempo;
        while(tempo!=NULL){
            if(mp[tempo->val]==1){
                tempo=tempo->next;
                pre->next=tempo;
            }
            else{
                pre=tempo;
                tempo=tempo->next;
            }
        }
        return head;
    }
};