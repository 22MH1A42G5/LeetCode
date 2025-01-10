class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> freq(26, 0);
        for (int i = 0; i < words2.size(); i++) {
            vector<int> temp(26, 0);
            for (int j = 0; j < words2[i].size(); j++) {
                temp[words2[i][j] - 'a']++;
            }
            for (int k = 0; k < 26; k++) {
                freq[k] = max(freq[k], temp[k]);
            }
        }
        vector<string> res;
        for (int i = 0; i < words1.size(); i++) {
            vector<int> temp(26, 0);
            for (int j = 0; j < words1[i].size(); j++) {
                temp[words1[i][j] - 'a']++;
            }
            bool flag = true;
            for (int k = 0; k < 26; k++) {
                if (freq[k] > temp[k]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                res.push_back(words1[i]);
            }
        }
        return res;
    }
};
