class Solution {
public:
    string addSpaces(string s, vector<int>& sp) {
        string t = "";
        if(sp.front() > 0)
            t = s.substr(0, sp.front());
        int n = sp.size();
        for(int i = 0; i < n; ++i) {
            int cur = sp[i];
            int nxt = i + 1 < n ? sp[i + 1] : (int)s.size();
            t += " " + s.substr(cur, nxt - cur);
        }
        return t;
    }
};