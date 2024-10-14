class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int s=0;
        for(auto i=mpp.begin();i!=mpp.end();i++){
            if(i->second==1)
                s+=i->first;
        }
        return s;
    }
};