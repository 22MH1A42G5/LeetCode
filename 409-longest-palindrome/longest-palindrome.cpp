class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(int i = 0 ; i < s.size() ; i++){
            mp[s[i]]++;
        }
        int c = 0 , ans = 0;
        for(auto it:mp){
            if(it.second%2==0){
                ans+=it.second;
            }else{
                if(it.second > 1){
                    ans+=it.second-1;
                    c=1;
                }
                else
                c=1;
            }
        }
        return ans+c;
    }
};