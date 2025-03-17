class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int maxi = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
        }
        vector<int>vec(maxi+1 , 0);
        for(int i  = 0 ; i < nums.size() ; i++){
            vec[nums[i]]++;
        }
        for(int i = 0 ;i < vec.size() ; i++){
            if(vec[i] % 2 == 1){
                return false;
            }
        }
        return true;
    }
};