class Solution {
public:
    bool check(string s1, string s2, int idx) {
        vector<int>freq1(26, 0),freq2(26, 0);
        while (idx <s1.length()) {
            freq1[s1[idx]-'a']++;
            freq2[s2[idx]-'a']++;
            idx += 2;
        }
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) return false;
        }
        return true;
    }
    bool checkStrings(string s1, string s2) {
        return check(s1, s2, 0) && check(s1, s2, 1);
    }
};