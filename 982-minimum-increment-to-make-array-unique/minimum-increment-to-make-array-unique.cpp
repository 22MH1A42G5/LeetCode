class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        int c=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            int temp=nums[i];
            if(mp[nums[i]]>1){
                mp[nums[i]]--;
                nums[i]=nums[i-1]+1;
                mp[nums[i]]++;
                c+=nums[i]-temp;
            }
        }
        return c;
    }
};