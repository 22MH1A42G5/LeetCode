class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]==0){
                cnt++;
            }
        }
        vector<int>ans;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] != 0){
                ans.push_back(nums[i]);
            }
        }
        for(int i = 0 ; i < cnt ; i++){
            ans.push_back(0);
        }
        nums=ans;
    }
};