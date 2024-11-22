class Solution {
public:
    int maxProfit(vector<int>& pr) {
        if(pr.size() == 0) return 0;
        int ans = 0;
        int st = pr[0], en = pr[0];
        for(int i = 0; i < pr.size(); i++){
            if(pr[i] < st){
                ans = max(ans, en - st);
                st = pr[i];
                en = pr[i];
            }else{
                en = max(en, pr[i]);
            }
        }
        ans = max(ans, en - st);
        return ans;
    }
};