class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int k = nums.size();
        vector<int>vec(k,0);
        vector<int>ans(2,0);
        int mini;
        int min_ind,max_ind,ans_mini= INT_MAX,maxi;
        int i = 0;
        multimap<int,pair<int,int>>mpp;
        int ze = 0;
        for(int i = 0 ; i < k ; i++){
            mpp.insert({nums[i][0] , {i , ze}});
        }
        // for(auto it : mpp){
        //     cout<<it.first<<":"<<it.second.first<<" "<<it.second.second<<"\n";
        // }
        while(true){
            // ans_mini = min((mpp.rbegin()->first - mpp.begin()->first),ans);
            int i = mpp.begin()->second.first;
            int j = mpp.begin()->second.second;
            // for(auto it : mpp){
            //     cout<<it.first<<":"<<it.second.first<<" "<<it.second.second<<"\n";
            // }
            // cout<<"\n";
            // cout<<nums[i][j]<<" ";
            // cout<<mpp.rbegin()->first - mpp.begin()->first<<"\n";
            if(ans_mini > abs(mpp.rbegin()->first - mpp.begin()->first)){
                ans[0] = mpp.begin()->first;
                ans[1] = mpp.rbegin()->first;
                ans_mini = (mpp.rbegin()->first - mpp.begin()->first);
            }
            if(j+1 >= nums[i].size())
            break;
            mpp.insert({nums[i][j+1] , {i , j+1}});
            mpp.erase(mpp.begin());
        }
        // cout<<mpp.begin()->first<<" ";
        return ans;
    }
};