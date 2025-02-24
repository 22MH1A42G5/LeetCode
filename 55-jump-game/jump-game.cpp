class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int fin = 0;
        for(int i = 0 ; i < n ; i++){
            if(i > fin)
                return false;
            fin = max(nums[i] + i , fin);
            if(fin >= n-1)
                return true;
        }
        return false;

    }
};