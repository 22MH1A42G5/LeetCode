class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp,mpp1;
        vector<int>ans;
        vector<pair<int,int>>vec;
        for(int i = 0 ;i < nums.size() ; i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            vec.push_back({it.second , it.first});
        }
        for(int i = 0 ;i  < vec.size() ; i++){
            cout << vec[i].first << " " << vec[i].second << "\n";
        }
        sort(vec.rbegin() , vec.rend());
        for(int i = 0 ; i < k ; i++){
            ans.push_back(vec[i].second);
        }
        return ans;
    }
};