class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int s = nums[0];
        // return 1;
        int ans = INT_MIN;
        int n = nums.size();
        for(int i = 1 ; i < nums.size() ; i++){
            ans = max(ans , s);
            // cout<<s<<" ";
            if(nums[i] <= nums[i-1] ){
                s = 0;
                // cout<<nums[i]<<" ";
            }
            s+=nums[i];
        }
        // cout<<s<<" ";
        ans = max(ans , s);
        return ans;
    }
};