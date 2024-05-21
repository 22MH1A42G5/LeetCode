class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ret;
        for(int i=0;i<(1<<n);i++){
            vector<int> a;
            for(int j=0;j<n;j++) if((1<<j)&i) a.push_back(nums[j]);
            ret.push_back(a);
        }
        return ret;
    }
};