class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        map<int, vector<int>> mp;
        vector<int> ans;
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                mp[i+j].push_back(mat[i][j]);
            }
        }
        bool fl = 1;
        for(auto it : mp) {
            if(fl == 1) {
                reverse(it.second.begin(), it.second.end());
            }
            
            for(int &num : it.second) {
                ans.push_back(num);
            }
            if(fl == 0) fl = 1;
            else fl = 0;
        }
        
        return ans;
    }
};