class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& ori, int m, int n) {
        vector<vector<int>>ans;
        vector<int>tem;
        // return {{}};
        int k = 0;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(k == ori.size())
                return {};
                tem.push_back(ori[k]);
                k++;
            }
            ans.push_back(tem);
            tem.clear();
        }
        if(k != ori.size() || ans.size() == 0){
            return {};
        }
        return ans;
    }
};