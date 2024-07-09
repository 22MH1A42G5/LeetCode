class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& cus) {
        double ans;
        double ans1 = cus[0][1];
        double cnt = cus[0][0]+cus[0][1];
        for(int i = 1 ; i < cus.size() ; i++){
            if(cnt > cus[i][0]){
                cnt+=cus[i][1];
                ans1+=cnt - cus[i][0];
            }
            else{
                cnt = cus[i][0]+cus[i][1];
                ans1 += cus[i][1];
            }
        }
        ans = ans1/cus.size();
        return ans;
    }
};