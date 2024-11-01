class Solution {
public:
    string makeFancyString(string s) {
        int i = 0;
        string ans = "";
        while(i < s.size()){
            if(i < s.size()-1 && s[i] == s[i+1]){
                char ch = s[i];
                ans += s[i];
                ans += s[i+1];
                while(ch == s[i]){
                    i++;
                }
                // i--;
            }
            else{
                ans+=s[i];
                i++;
            }
        }
        return ans;
    }
};