class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_map<char, int> firstOcc;
        unordered_map<char, int> lastOcc;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            if (firstOcc.find(s[i]) == firstOcc.end()) {
                firstOcc[s[i]] = i;
            }
            lastOcc[s[i]] = i;
        }

        int count = 0;
        for (const auto& entry : firstOcc) {
            char ch = entry.first;
            int first = entry.second;
            int last = lastOcc[ch];

            if (first == last) continue;

            unordered_set<char> set1;
            for (int i = first + 1; i < last; i++) {
                set1.insert(s[i]);
            }
            count += set1.size();
        }

        return count;
    }
};