class Solution {
public:
    int func(vector<int>& coins , int tar , int ind , vector<vector<int>>&dp){
        if(ind == 0){
            if( (tar % coins[ind] ) == 0){
                return (tar / coins[ind]);
            }
            return 1e9;
        }
        if(dp[ind][tar] != -1) return dp[ind][tar];
        int nottake = func(coins , tar , ind-1 ,dp);
        int take = INT_MAX;
        if(coins[ind] <= tar){
            take = 1 + func(coins , tar-coins[ind] , ind  ,dp);
        }
        return dp[ind][tar] = min(take , nottake);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size() , vector<int>(amount+1 , -1));
        return func(coins , amount , coins.size()-1 , dp) == 1e9 ? -1 : func(coins , amount , coins.size()-1 , dp);
    }
};