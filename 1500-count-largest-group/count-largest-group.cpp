class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        int mxfq = 0;
        for (int i = 1; i <= n; i++) {
            int s = 0, t = i;
            while (t) {
                s += t % 10;
                t /= 10;
            }
            mp[s]++;
            mxfq = max(mxfq, mp[s]);
        }
        int res = 0;
        for (auto it:mp) {
            if (it.second == mxfq) {
                res++;
            }
        }
        return res;
    }
};
