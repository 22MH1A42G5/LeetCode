class Solution {
public:
    vector<string> f(string sentence) {
        stringstream ss(sentence);
        vector<string> v;
        string s;
        while(ss >> s) v.push_back(s);
        return v;
    }
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> v1 = f(sentence1);
        vector<string> v2 = f(sentence2);
        if(v1.size() < v2.size()) return areSentencesSimilar(sentence2, sentence1);
        int left = 0, right = v1.size() - 1, l = 0, r = v2.size() - 1;
        while(v1[left] == v2[l]) {
            l++;
            left++;
            if(l == v2.size() || left == v1.size()) break;
        }
        while(v1[right] == v2[r]) {
            r--;
            right--;
            if(right < 0 || r<0) break;
        }
        return r < l;
    }
};