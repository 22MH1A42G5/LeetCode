class Solution {
public:
    int minimumLength(string s) {
        vector<int>cnt(26,0);
        int res=0;
        for(int i=0;i<s.size();i++)
            cnt[s[i]-'a']++;
        for(int i=0;i<26;i++)
            res+=((cnt[i]!=0)?((cnt[i]%2==0)?2:1):0);
        return res;
    }
};