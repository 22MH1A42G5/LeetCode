class Solution {
public:
    void f(vector<int>& n, int i, int s, int t) {
        if (i == n.size()) {
            if (s == t) {
                w++;
            }
        } else {
            f(n, i + 1, s + n[i], t);
            f(n, i + 1, s - n[i], t);
        }
    }
    int w = 0;
    int findTargetSumWays(vector<int>& n, int t) {
        f(n, 0, 0, t);
        return w;
    }
};
