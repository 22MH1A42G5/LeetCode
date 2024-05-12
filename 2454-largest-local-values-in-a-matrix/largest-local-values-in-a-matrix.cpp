class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& a) {
        int n=a.size();
        vector<vector<int>> ret(n-2,vector<int>(n-2,INT_MIN));
        for(int i=1;i<n-1;i++){
            for(int j=1;j<n-1;j++){
                for(int k=i-1;k<=i+1;k++){
                    for(int l=j-1;l<=j+1;l++){
                        ret[i-1][j-1]=max(ret[i-1][j-1],a[k][l]);
                    }
                }
            }
        }
        return ret;
    }
};