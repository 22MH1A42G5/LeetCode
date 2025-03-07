class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        if(k >= nums.size()-1){
            for(int i = 0 ; i < nums.size() ; i++){
                mpp[nums[i]]++;
                if(mpp[nums[i]] == 2){
                    return true;
                }
            }
            return false;
        }
        for(int i = 0 ; i <= k ; i++){
            mpp[nums[i]] ++;
            if(mpp[nums[i]] == 2){
                return true;
            }
        }
        int i = k+1;
        int n = nums.size();
        while(i < n){
            mpp.erase(nums[i -(k+1)]);
            mpp[nums[i]]++;
            if(mpp[nums[i]] == 2)
            return true;
            i++;
        }
        return false;
    }
};