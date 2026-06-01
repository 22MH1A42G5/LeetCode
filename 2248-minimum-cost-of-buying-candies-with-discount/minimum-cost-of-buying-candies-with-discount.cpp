class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        sort(cost.begin(), cost.end());
        int ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            if ((n -1 -i) % 3 == 2) {
                continue;
            }
            ans += cost[i];
        }
        return ans;
    }
};