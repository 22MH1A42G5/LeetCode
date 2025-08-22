class Solution {
public:
    int EditDistance(int i , int j , string &word1 , string &word2 , vector<vector<int>>&dp){
        if(i < 0){
            return j+1;
        }
        if(j < 0){
            return i+1;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(word1[i] == word2[j]){
            return EditDistance(i-1 , j-1 , word1 , word2, dp);
        }
        int ins = 1 + EditDistance(i , j-1 , word1 , word2 , dp);
        int rem = 1 + EditDistance(i-1 , j , word1 , word2 , dp);
        int rep = 1 + EditDistance(i-1 , j-1 , word1 , word2 , dp);
        return dp[i][j] = min(ins , min(rem , rep));
    }
    int minDistance(string word1, string word2) {
        int n = word1.size() , m = word2.size();
        vector<vector<int>>dp(n , vector<int>(m , -1));
        return EditDistance(word1.size()-1 , word2.size()-1 , word1 , word2 , dp);
    }
};