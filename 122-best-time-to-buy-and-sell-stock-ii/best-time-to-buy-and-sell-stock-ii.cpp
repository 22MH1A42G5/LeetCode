class Solution {
public:
    int maxProfit(vector<int>& pr) {
        int i = 0 , j = 1;
        int ans = 0;
        while(i < (pr.size() - 1)){
            if(pr[i] < pr[i+1]){
                ans += pr[i+1] - pr[i];
            }
            i++;
        }
        return ans;
    }
};