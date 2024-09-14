class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0, cnt = 0, tem = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(tem < nums[i]) {
                tem = nums[i];
                ans = 0;
                cnt = 0;
            }
            if(tem == nums[i]) {
                cnt++;
            } else {
                cnt = 0;
            }
            ans = max(ans, cnt);
        }
        return ans;
    }
};