class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            s += nums[i];
        }
        if(s % 2) return false;
        int tar = s/2;
        vector<vector<bool>>dp(n , vector<bool>(tar+1 , false));
        for(int i = 0 ; i < n ; i++) dp[i][0] = true;
        if(nums[0] <= tar)
        dp[0][nums[0]] = true;
        for(int i = 1 ; i < n ; i++){
            for(int j = 1 ; j <= tar ; j++){
                bool pick = dp[i-1][j];
                bool notpick = false;
                if(nums[i] <= j){
                    notpick = dp[i-1][j - nums[i]];
                }
                dp[i][j] = pick | notpick;
            }
        }
        return dp[n-1][tar];
    }
};