class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi = -1;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i+1 ; j < nums.size() ; j++){
                // if(nums[i] <= nums[j+1]){
                    maxi = max(nums[j] - nums[i],maxi);
                // }
            }
        }
        return (maxi <= 0) ? -1 : maxi;
    }
};