class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        if(nums.size() <= 3) return false;
        int i1 = 0 , i2 = 0 , d1 = 0;
        for(int i  = 0 ; i < nums.size()-1 ; i++){
            if(nums[i] < nums[i+1] && i1 == 0){
                i1 = 1;
            }
            if(nums[i] > nums[i+1] && i1 == 1){
                d1 = 1;
            }
            if(nums[i] < nums[i+1] && d1 == 1){
                // cout << "HI";
                i2 = 1;
            }
            // cout << i1 << " " << d1 << " " << i2 << "\n";
            if(i2 == 1 && nums[i] > nums[i+1]){
                // cout << "HI";
                return false;
            }
            if(i1 == 0 && d1 == 0 && i2 == 0) return false;
            if(nums[i] == nums[i+1]) return false;
        }
        if(i1 == 1 && i2 == 1 && d1 == 1) return true;
        else return false;
    }
};