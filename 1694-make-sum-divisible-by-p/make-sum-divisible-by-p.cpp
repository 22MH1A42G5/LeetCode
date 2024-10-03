class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int sum = accumulate(nums.begin(), nums.end(), 0l) % p;
        if (sum == 0) return 0;
        unordered_map<int, int> m;
        m[0] = -1;
        int cur = 0, res = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            cur += nums[i];
            cur %= p;
            m[cur] = i;
            int t = (cur - sum + p) % p;
            if (m.count(t)) {
                res = min(res, i - m[t]);
            }
        }
        return res == nums.size() ? -1 : res;
    }
};