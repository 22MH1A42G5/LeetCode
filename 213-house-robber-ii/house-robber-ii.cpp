class Solution {
public:
    int fun(int ind , vector<int>nums , vector<int>&dp){
        if(ind == 0) return nums[0];
        if(ind < 0) return 0;
        if(dp[ind] != -1) return dp[ind];
        int pick = nums[ind] + fun(ind - 2 , nums , dp);
        int nonpick = fun(ind - 1 , nums , dp);
        return dp[ind] = max(pick , nonpick);
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int n = nums.size();
        int tem = nums[n-1];
        nums.pop_back();
        vector<int>dp(n , -1);
        int ans1 = fun(n-2 , nums ,dp);
        for(int i = 0 ; i < dp.size() ; i++) dp[i] = -1;
        nums.push_back(tem);
        nums.erase(nums.begin());
        // cout << tem;
        // for(int i = 0 ; i < nums.size() ; i++){
        //     cout << nums[i] << " ";
        // }
        int ans2 = fun(n-2 , nums , dp);
        // cout << ans2 <<  " ";
        return max(ans1 , ans2);

        // return max()
    }
};