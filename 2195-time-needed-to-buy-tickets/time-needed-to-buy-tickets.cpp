class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n=tickets.size(),ans=0;
        for(int i=0;i<n;i++){
            if(tickets[i]>=tickets[k]){
                if(i<=k)
                    ans+=tickets[k];
                else
                    ans+=tickets[k]-1;
            }
            else
                ans+=tickets[i];
        }
        return ans;
    }
};