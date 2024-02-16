class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i < arr.size() ; i ++){
            mp[arr[i]]++;
        }
        vector<int> v;
        for( auto it : mp){
            v.push_back(it.second);
        }
        sort(v.begin(),v.end());
        int i=0;
        while(k!=0){
            v[i]-=1;
            k--;
            if(v[i]==0){
                i++;
            }
        }
        int cnt=0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=0){
                cnt++;
            }
            cout<<v[i]<<" ";
        }
        return cnt;
    }
};