class Solution {
public:
    vector<vector<int>> generate(int numRows){
        vector<vector<int>>big;
        for(long long i=0;i<numRows;i++){
            long long n=i+1;
            vector<int>ls;
            for(long long j=0;j<n;j++){
                if(j==0 || j==n-1){
                    ls.push_back(1);
                    }
                else{
                    ls.push_back(big[i-1][j-1]+big[i-1][j]);
                }
            }
            big.push_back(ls);
        }
        return big;
    }
};
