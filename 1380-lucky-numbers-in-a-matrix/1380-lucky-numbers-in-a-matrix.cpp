class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>rows;
        vector<int>cols;
        vector<int>res;
        int mx,mn,n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++){
            mn=100001;
            for(int j=0;j<m;j++){
                if(matrix[i][j]<mn)
                    mn=matrix[i][j];
            }
            rows.push_back(mn);
        }
        for(int i=0;i<m;i++){
            mx=0;
            for(int j=0;j<n;j++){
                if(matrix[j][i]>mx)
                    mx=matrix[j][i];
            }
            cols.push_back(mx);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==cols[j] && matrix[i][j]==rows[i])
                    res.push_back(cols[j]);
            }
        }
        return res;
    }
};