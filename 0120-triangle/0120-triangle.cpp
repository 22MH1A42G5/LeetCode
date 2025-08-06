class Solution {
public:
    int minimumTotal(vector<vector<int>>& trig) {
        vector<vector<int>>dp;
        int n = trig.size();
        dp.push_back({trig[0][0]});
        for(int i = 1 ; i < trig.size() ; i++){
            vector<int>temp;
            for(int j = 0 ; j < trig[i].size() ; j++){
                if(j == 0 && i != 0){
                    temp.push_back(dp[i-1][0]+trig[i][j]);
                }
                else if(j == trig[i].size()-1 && i != 0){
                    temp.push_back(dp[i-1][j-1] + trig[i][j]);
                }
                else
                temp.push_back(INT_MAX);
            }
            dp.push_back(temp);
        }
        dp[0][0] = trig[0][0];
        for(int i = 1 ; i < dp.size() ; i++){
            for(int j = 1 ;j < dp[i].size() ; j++){
                if(dp[i][j] == 2147483647){
                    dp[i][j] = min(dp[i-1][j-1],dp[i-1][j]) + trig[i][j];
                }
            }
        }
        int ans = INT_MAX;
        for(int i = 0 ; i < dp[n-1].size() ; i++){
            ans = min(ans , dp[n-1][i]);
        }
        return ans;
    }
};