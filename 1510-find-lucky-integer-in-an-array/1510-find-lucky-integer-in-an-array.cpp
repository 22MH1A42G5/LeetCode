class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>vec(501,0);
        for(int i = 0 ; i < arr.size() ; i++){
            vec[arr[i]]++;
        }
        int res = -1;
        for(int i = 1 ; i < vec.size() ; i++){
            if(vec[i] == i){
                res = i;
            }
        }
        return res;
    }
};