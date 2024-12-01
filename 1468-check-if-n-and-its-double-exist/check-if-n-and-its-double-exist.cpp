class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,vector<int>>mp;
        for(int i = 0 ; i < arr.size(); i++){
            mp[arr[i]].push_back(i);
        }
        // return true;
        for(int i = 0 ; i< arr.size() ; i++){
            if(arr[i]%2 == 0){
                int te = arr[i]/2;
                if(mp[te].size() != 0){
                    for(int j = 0 ; j < mp[arr[i]].size() ; j++){
                        if(mp[te][j] != i)
                        return true;
                    }
                }
            
            }
        }
        return false;
    }
};