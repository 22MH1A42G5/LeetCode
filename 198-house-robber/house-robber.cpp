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
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0] , nums[1]);
        vector<int>dp(n , -1);
        // return fun(nums , n-1 , dp);
        dp[0] = nums[0];
        dp[1] = nums[1];
        dp[2] = nums[0]+nums[2];
        for(int i = 3 ; i < n ; i++){
            dp[i] = max(dp[i-2] + nums[i],dp[i-3] + nums[i]);
        }
        return max(dp[n-2] , dp[n-1]);
    }
};