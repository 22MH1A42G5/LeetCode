class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        long long pref=0;
        map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            pref=pref+nums[i];
            if(mp[pref%k]>=2)
                return true;
            mp[pref%k]++;
            mp[(abs(pref-nums[i]))%k]++;
            cout<<nums[i]<<" ";
        }
        return false;
    }
};