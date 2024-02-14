class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pv;
        vector<int>nv;
        vector<int>ans;
        int n = nums.size();
        for( int i = 0 ; i < n ; i ++){
            if(nums[i] < 0){
                nv.push_back(nums[i]);
            }
            else{
                pv.push_back(nums[i]);
            }
        }
        for(int i = 0 ; i < n/2 ; i ++){
            ans.push_back(pv[i]);
            ans.push_back(nv[i]);
        }
        return ans;

    }
};