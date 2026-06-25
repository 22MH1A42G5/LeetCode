class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int tar) {
        int temp = 0 , sz , ans = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            temp = 0;
            for(int j = i ; j < nums.size() ; j++){
                sz = j - i + 1;
                if(nums[j] == tar){
                    temp++;
                }
                if(temp > sz/2){
                    ans++;
                }
            }
        }
        return ans;
    }
};