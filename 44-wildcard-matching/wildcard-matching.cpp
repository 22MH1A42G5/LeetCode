class Solution {
public:
    bool WildCard(int i , int j , string& s , string& p, vector<vector<int>>&dp){
        if(i == 0 && j == 0){
            return true;
        }
        if(j == 0 && i > 0){
            return false;
        }
        if(i == 0 && j > 0){
            while(j > 0){
                if(p[j-1] != '*'){
                    return false;
                }
                j--;
            }
            return true;
        }
        if(dp[i][j] != -1) return dp[i][j];
        if(s[i-1] == p[j-1] || p[j-1] == '?'){
            return dp[i][j] = WildCard(i-1 , j-1 , s , p , dp);
        }
        else if(p[j-1] == '*'){
            return dp[i][j] = (WildCard(i , j-1 , s , p , dp) || WildCard(i-1 , j , s , p , dp));
        }
        return dp[i][j] = false;
    }
    bool isMatch(string s, string p) {
        int n = s.size() , m = p.size();
        if(s.size() > 0 && p.size() == 0){
            return false;
        }
        if(s.size() == 0){
            // cout << p;
            int i = m-1;
            while(i >= 0){
                // cout << p[i] <<" ";
                if(p[i] != '*'){
                    return false;
                }
                i--;
            }
            return true;
        }
        vector<vector<int>>dp(n+1 , vector<int>(m+1 , -1));
        dp[0][0] = 1;
        for(int i = 1 ;i <= n ; i++){
            dp[i][0] = 0;
        }
        for(int i = 1 ;i <= m ; i++){
            if(p[i-1] == '*')
            dp[0][i] = 1;
            else
            dp[0][i] = 0;
        }
        WildCard(n , m , s , p , dp);
        return dp[n][m];
    }
};