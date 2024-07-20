class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& a, vector<int>& b) {
        int n=a.size(),m=b.size();
        vector<vector<int>> ret(n,vector<int>(m));
        vector<int> r(n),c(m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ret[i][j]=min(a[i]-r[i],b[j]-c[j]);
                r[i]+=ret[i][j],c[j]+=ret[i][j];
            }
        }
        return ret;
    }
};