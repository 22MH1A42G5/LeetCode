class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        vector<int>r;
        vector<int>l;
        int sol=0,max=0;
        for(int i=0;i<n;i++){
            if(max<nums[i]){
                max=nums[i];
            }
            r.push_back(max);
        }
        max=0;
        for(int i=n-1;i>=0;i--){
            if(max<nums[i]){
                max=nums[i];
            }
            l.push_back(max);
        }
        reverse(l.begin(),l.end());
        for(int i=0;i<n;i++){
            sol+=min(l[i],r[i])-nums[i];
        }
        return sol;
    }
};