class Solution {
public:
    int countPairs(vector<int>& nums, int tar) {
        sort(nums.begin() , nums.end());
        int i= 0,j = nums.size()-1;
        int ans = 0;
        while(i < j){
            if(nums[i] + nums[j] < tar){
                ans += j-i;
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};