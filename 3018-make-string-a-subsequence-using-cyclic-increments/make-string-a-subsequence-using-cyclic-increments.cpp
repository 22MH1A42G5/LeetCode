class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        for (int i = 0, j = 0; j < str2.size(); j++) {
            while (i < str1.size() && (str1[i] != str2[j] && (str1[i] - 'a' + 27) % 26 != (str2[j] - 'a'))) {
                i++;
            }
            if (i++ == str1.size()) 
                return false;
        }
        return true;
    }
};