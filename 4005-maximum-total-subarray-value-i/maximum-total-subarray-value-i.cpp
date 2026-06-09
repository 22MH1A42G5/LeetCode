class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long mini = LLONG_MAX;
        long long maxi = LLONG_MIN;
        for(int i = 0 ; i< nums.size() ; i++){
            if(maxi < nums[i]) maxi = nums[i];
            if(mini > nums[i]) mini = nums[i];
        }
        long long finans = (maxi-mini)*k;
        return finans;
    }
};