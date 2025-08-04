class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<vector<int>>dp(n , vector<int>(n , INT_MAX));
        for(int i = 0 ; i < mat.size() ; i++){
            dp[0][i] = mat[0][i];
        }
        for(int i = 1 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(j != 0){
                    dp[i][j] = dp[i-1][j-1];
                }
                dp[i][j] = min(dp[i-1][j] , dp[i][j]);
                if(j != n-1){
                    dp[i][j] = min(dp[i-1][j+1] , dp[i][j]);
                }
                dp[i][j] += mat[i][j];
            }
        }
        int ans = INT_MAX;
        for(int i = 0 ; i  < n ; i++){
            ans = min(dp[n-1][i] , ans);
        }
        return ans;
    }
};