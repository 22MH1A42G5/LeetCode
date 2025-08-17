class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n = str1.size() , m = str2.size();
        vector<vector<int>>dp(n+1 , vector<int>(m+1 , 0));
        for(int i = 1; i <= n ; i++){
            for(int j = 1 ; j <= m ; j++){
                if(str1[i-1] == str2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        int i = n , j = m;
        int anslen = n + m - dp[n][m];
        string ans = "";
        for(int i = 0 ; i < anslen ; i++) ans += "$";
        while(i > 0 && j > 0){
            if(str1[i-1] == str2[j-1]){
                ans[anslen - 1] = str1[i-1];
                i--;
                j--;
                anslen--;
            }
            else if(dp[i-1][j] > dp[i][j-1]){
                ans[anslen-1] = str1[i-1];
                anslen--;
                i--;
            }
            else{
                ans[anslen-1] = str2[j-1];
                anslen--;
                j--;
            }
            // cout << ans << "\n";
        }
        while (i > 0){
            ans[anslen-1] = str1[i-1];
            i--;
            anslen--;
        }
        while(j > 0){
            ans[anslen - 1] = str2[j-1];
            j--;
            anslen--;
        }
        // cout << i << " " << j;
        return ans;
    }
};