class Solution {
public:
    int heightChecker(vector<int>& vec) {
        vector<int>temp = vec;
        sort(vec.begin(),vec.end());
        int ans = 0;
        for(int i = 0 ; i < vec.size() ; i++){
            if(temp[i] != vec[i])
            ans++;
        }
        return ans;
    }
};