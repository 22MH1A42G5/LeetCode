class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int>mp;
        int max;
        vector<vector<int>>dv;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>max){
                max=it.second;
            }
        }
        while(max--){
            for(auto it : mp){
                if(it.second>0){
                    v.push_back(it.first);
                    mp[it.first]--;
                }
            }
            dv.push_back(v);
            v.clear();
        }
        return dv;
    }
};