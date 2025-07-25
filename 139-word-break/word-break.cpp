class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int maxLen = 0;
        for(int i = 0 ; i < wordDict.size() ; i++){
            if(maxLen < wordDict[i].size()){
                maxLen = wordDict[i].size();
            }
            // maxLen = max(maxLen , wordDict[i].size());
        }
        set<string>st(wordDict.begin() , wordDict.end());
        vector<bool>dp(s.size()+1 , false);
        dp[0] = true;
        // cout << wordDict.size() << " ";
        for(int i = 0 ; i < s.size() ; i++){
            int t = maxLen;
            for(int j = i ; j >= 0 && t!= 0 ; j--){
                string sub = s.substr(j , i - j+1);
                if(st.find(sub) != st.end()){
                    if(dp[j] == true){
                        dp[i+1] = true;
                    }
                    cout << sub << " " << i << " " << j << "\n";
                }
                t--;
            }
        }
        for(int i = 0 ; i< dp.size() ; i++){
            cout << dp[i] <<" ";
        }
        // string stri = "sriram";
        // cout << stri.substr(2 , 2);
        return dp[s.size()];
    }
};