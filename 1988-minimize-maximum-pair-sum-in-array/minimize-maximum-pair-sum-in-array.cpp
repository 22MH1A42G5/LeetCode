class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int max=0;
        sort(nums.begin(),nums.end());
        while(i<j){
            if(nums[i]+nums[j]>max){
                max=nums[i]+nums[j];
            }
            i++;
            j--;
        }
        return max;
    }
};