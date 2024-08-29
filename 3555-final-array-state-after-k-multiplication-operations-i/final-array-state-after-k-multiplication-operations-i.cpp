class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int j,mn=INT_MAX,ind=0;
        while(k--){
            for(j=0;j<nums.size();j++){
                if(mn>nums[j]){
                    mn=nums[j];
                }
            }
            for(j=0;j<nums.size();j++){
                if(nums[j]==mn){
                    ind=j;
                    break;
                }
            }
            nums[ind]=nums[ind]*multiplier;
            mn=INT_MAX;
        }
        return nums;
    }
};