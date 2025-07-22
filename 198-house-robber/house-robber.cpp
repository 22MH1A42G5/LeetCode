class Solution {
public:
    int fun(vector<int>nums , int ind , vector<int>&dp){
        if(ind == 0){
            return nums[ind];
        }
        if(ind < 0){
            return 0;
        }
        if(dp[ind] != -1) return dp[ind];
        int pick;
        pick =  nums[ind] + fun(nums , ind-2,dp);
        int np = fun(nums , ind - 1,dp);
        return dp[ind] = max(pick , np);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1 , -1);
        return fun(nums , n-1 , dp);
    }
};