class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int , int> mpp;
        for(int i = 0 ; i < nums.size() ; i++){
            mpp[nums[i]]++;
        }
        vector<int>ans;
        for(auto it : mpp){
            if(it.second == 1){
                ans.push_back(it.first);
            }
            if(it.second >= 2){
                ans.push_back(it.first);
                ans.push_back(it.first);
            }
        }
        nums.clear();
        nums = ans;
        return nums.size();
    }
};