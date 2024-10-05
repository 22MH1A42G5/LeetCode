class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> bkt(26);
        int cnt = 0;
        for (char c : s1) {
            if (bkt[c - 'a']++ == 0) cnt++;
        }
        int l = s1.size();
        for (int i = 0; i < s2.size(); i++) {
            if (--bkt[s2[i] - 'a'] == 0) cnt--;
            if (i >= l) {
                if (bkt[s2[i - l] - 'a']++ == 0) cnt++;
            }
            if (i >= l - 1 && cnt == 0) return true;
        }
        return false;
    }
};