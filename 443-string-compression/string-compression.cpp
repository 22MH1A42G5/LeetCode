class Solution {
public:
    int compress(vector<char>& chars) {
        string ans = "";
        for(int i = 0; i < chars.size();) {
            char ch = chars[i];
            int  cnt = 0;
            while(i < chars.size() && chars[i] == ch) {
                cnt++;
                i++;
            }
            ans += ch;
            if(cnt != 1)
            ans += to_string(cnt);
        }
        chars.clear();
        for(int i = 0; i < ans.size(); i++) {
            chars.push_back(ans[i]);
        }
        return ans.size();
    }
};