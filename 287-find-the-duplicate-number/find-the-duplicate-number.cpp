class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[0] , fl = 1;
        while(slow != fast || fl == 1){
            slow = nums[slow];
            fast = nums[nums[fast]];
            fl = 0;
        }
        fast = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
};