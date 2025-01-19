class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int mx=0;
        for(int i=0;i<nums.size()-1;i++){
            if(abs(nums[i]-nums[i+1])>mx)
                mx=abs(nums[i]-nums[i+1]);
        }
        mx=max(abs(nums[nums.size()-1]-nums[0]),mx);
        return mx;
    }
};