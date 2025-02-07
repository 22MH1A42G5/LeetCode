class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& q) {
        int n = q.size();
        vector<int> res(n);
        unordered_map<int, int> cm, bm;
        for (int i = 0; i < n; i++) {
            int b = q[i][0], col = q[i][1];
            if (bm.find(b) != bm.end()) {
                int pc = bm[b];
                cm[pc]--;
                if (cm[pc] == 0) cm.erase(pc);
            }
            bm[b] = col;
            cm[col]++;
            res[i] = cm.size();
        }
        return res;
    }
};