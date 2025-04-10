class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& v) {
        int n=v.size();
        vector<int> maxL(n);
        maxL[0] = v[0];
        int maxS = 0;
        for (int i = 1; i < n; i++) {
            int right = v[i] - i;
            maxS = max(maxS, maxL[i - 1] + right);
            int left = v[i] + i;
            maxL[i] = max(maxL[i - 1], left);
        }
        return maxS;
    }
};
