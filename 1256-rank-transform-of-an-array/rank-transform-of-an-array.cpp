class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>mp;
        for(int i = 0 ; i < arr.size() ; i++){
            mp[arr[i]]=1;
        }
        vector<int>ans;
        auto i = 1;
        for(auto it : mp){
            // cout<<it.first<<" "<<it.second<<" "<<i<<endl;
            mp[it.first] = i;
            // cout<<it.first<<" "<<it.second<<" "<<endl;
            i++;
        }
        for(int i = 0 ; i < arr.size() ; i++){
            cout<<mp[arr[i]]<<"\n";
        }
        for(int i = 0 ; i < arr.size() ; i++){
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};
