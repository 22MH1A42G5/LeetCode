class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>v;
        int s=0,max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                s=0;
            }
            s+=nums[i];
            v.push_back(s);
        }
        for(int i=0;i<nums.size();i++){
            if(v[i]>max){
                max=v[i];
            }
            //cout<<v[i]<<" ";
        }
        return max;
    }
};