class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int> f1, f2;
        for (int i = 0; i < (int)s1.size(); i++) {
            int j = i;
            while (j + 1 < (int)s1.size() && s1[j + 1] != ' ') j++;
            j++;
            f1[s1.substr(i, j - i)]++;
            i = j;
        }
        for (int i = 0; i < (int)s2.size(); i++) {
            int j = i;
            while (j + 1 < (int)s2.size() && s2[j + 1] != ' ') j++;
            j++;
            f2[s2.substr(i, j - i)]++;
            i = j;
        }
        vector<string> res;
        for (auto &p : f1) {
            if (p.second == 1 && !f2.count(p.first)) res.push_back(p.first);
        }
        for (auto &p : f2) {
            if (p.second == 1 && !f1.count(p.first)) res.push_back(p.first);
        }
        return res;
    }
};