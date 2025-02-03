class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=1;
        int si=1;
        int sd=1;
        for(int i=1;i<n;++i){
            if(nums[i]>nums[i-1])   
                si++;
            else
                si=1;
            if(nums[i]<nums[i-1])   
                sd++;
            else                    
                sd=1;

            l = max({l,si,sd});
        }
        return l;
    }
};