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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        // return {};
        if(head==NULL || head->next==NULL || head->next->next == NULL){
            return {-1,-1};
        }
        ListNode* prev = head;
        ListNode* pres = head->next;
        ListNode* nex = head ->next -> next;
        vector<int>v;
        int cnt = 2;
        while(nex != NULL){
            if(prev->val < pres->val && nex->val < pres->val )
                v.push_back(cnt);
            else if(pres->val < prev->val && pres->val < nex->val)
                v.push_back(cnt);
            cnt++;
            prev=prev->next;
            pres = pres->next;
            nex = nex->next;
        }
        int mini = INT_MAX;
        if(v.size() < 2){
            return {-1,-1};
        }
        for(int i = 0 ; i < v.size()-1 ; i++){
            if( v[i+1]-v[i] < mini){
                mini = v[i+1] - v[i];
            }
        }
        int maxi = v[v.size()-1]-v[0];
        return {mini,maxi};
    }
};