class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp,mp1;
        vector<int>v;
        for(int i = 0 ; i < nums1.size() ; i++){
            mp[nums1[i]]++;
        }
        for(int i = 0 ; i < nums2.size() ; i++){
            mp1[nums2[i]]++;
        }
        for(auto it : mp){
            for(int i = 0 ; i < min(it.second,mp1[it.first]) ; i++){
                v.push_back(it.first);
            }
        }
        return v;
    }
};