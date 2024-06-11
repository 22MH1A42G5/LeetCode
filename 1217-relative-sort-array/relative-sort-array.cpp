class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp,mp1;
        vector<int>noti;
        vector<int>ans;
        for(int i = 0 ; i < arr2.size() ; i++){
            mp[arr2[i]]++;
        }
        for(int i = 0 ;i < arr1.size() ; i++){
            if(mp[arr1[i]]==0)
            noti.push_back(arr1[i]);
        }
        for(int i = 0 ; i < arr1.size() ; i++){
            mp1[arr1[i]]++;
        }
        sort(noti.begin(),noti.end());
        for(int i = 0 ; i < arr2.size() ; i++){
            // cout<<mp[arr2[i]]
            for(int j = 0 ; j < mp1[arr2[i]] ; j++){
                ans.push_back(arr2[i]);
            }
        }
        for(int i = 0 ; i < noti.size() ; i++){
            ans.push_back(noti[i]);
        }
        return ans;
    }
};