class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>res;
        int ans=0;
        res.push_back(pref[0]);
        for(int i=0;i<pref.size()-1;i++){
            ans=pref[i]^pref[i+1];
            res.push_back(ans);
        }
        return res;
    }
};