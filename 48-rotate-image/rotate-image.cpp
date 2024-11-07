class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        vector<vector<int>>ans;
        vector<int>tem;
        for(int i = 0 ; i < mat.size();i++){
            int j = mat.size()-1;
            while(j!=-1){
                tem.push_back(mat[j][i]);
                j--;
            }
            ans.push_back(tem);
            tem.clear();
        }
        for(int i = 0 ; i < mat.size() ; i++){
            for(int j = 0 ; j < mat.size() ; j++){
                mat[i][j]=ans[i][j];
            }
        }
    }
};