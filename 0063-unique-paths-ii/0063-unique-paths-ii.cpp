class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<long long>>dp(m , vector<long long>(n,0));
        for(int i = 0 ; i < n ; i++){
            if(grid[0][i] == 1){
                break;
            }
            dp[0][i] = 1;
        }
        for(int i = 0 ; i < m ; i++){
            if(grid[i][0] == 1){
                break;
            }
            dp[i][0] = 1;
        }
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 1){
                    dp[i][j] = -1;
                }
            }
        }
        for(int i = 1 ; i < m ; i++){
            for(int j = 1 ; j < n ; j++){
                if(dp[i][j] == -1) continue;
                if(dp[i-1][j] != -1)
                dp[i][j] += dp[i-1][j];
                if(dp[i][j-1] != -1)
                dp[i][j] += dp[i][j-1];
                cout << i << " " << j << " " << dp[i][j] << "\n";
            }
        }
        return (dp[m-1][n-1] != -1)?dp[m-1][n-1]:0;
    }
};