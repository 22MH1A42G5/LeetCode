class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        // unordered_map<pair<int,int>,int>mpp;
        map<pair<int, int>, int> mpp;
        for(int i = 0; i < mat.size() ; i++) {
            for(int j = 0 ; j < mat[i].size() ; j++) {
                cout << mat[i][j] << " ";
                if(mat[i][j] == 1) {
                    if(mpp.empty()) {
                        mpp[{i , j}] = 1;
                        continue;
                    }
                    int fl = 0;
                    for(auto it : mpp) {
                        if(it.first.first == i || it.first.second == j) {
                            mpp[{it.first.first , it.first.second}] = 2;
                            mpp[{i , j}] = 2;
                            fl = 1;
                        }
                    }
                    if(fl == 0)
                    mpp[{i , j}] = 1;
                }
            }
            cout << "\n";
        }
        int ans = 0;
        for(auto it:mpp) {
            if(it.second == 1) {
                cout << it.first.first << " " << it.first.second << "\n";
                ans++;
            }
        }
        return ans;
    }
};