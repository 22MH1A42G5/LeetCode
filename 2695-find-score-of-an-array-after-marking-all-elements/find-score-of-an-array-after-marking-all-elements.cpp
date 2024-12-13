class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<vector<int>>arr;
        long long ans = 0;
        vector<bool> mar (nums.size(),0);
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(mar[arr[i][1]] == false){
                mar[arr[i][1]] = true;
                if(arr[i][1] > 0)
                mar[arr[i][1]-1] = true;
                if(arr[i][1]<arr.size()-1)
                mar[arr[i][1]+1] = true;
                ans += arr[i][0];
            }
        }
        return ans;
    }
};