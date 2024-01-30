class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
        vector<int>minis;
        vector<int>maxis;
        for(int i=0;i<mat.size();i++){
            int min=mat[i][0];
            for(int j=0;j<mat[0].size();j++){
                if(min>mat[i][j]){
                    min=mat[i][j];
                }
            }
            minis.push_back(min);
        }
        for(int i=0;i<mat[0].size();i++){
            int max=0;
            for(int j=0;j<mat.size();j++){
                if(max<mat[j][i]){
                    max=mat[j][i];
                }
            }
            auto t=find(minis.begin(),minis.end(),max);
            if(std::find(minis.begin(), minis.end(), max) != minis.end()){
                maxis.clear();
                maxis.push_back(max);
                return maxis;
            }
            maxis.push_back(max);
        }
        
        return {};
    }
};