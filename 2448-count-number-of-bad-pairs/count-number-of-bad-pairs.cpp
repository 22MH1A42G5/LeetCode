class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long bprs = 0;
        unordered_map<int, int> dc;
        for (int i = 0; i < nums.size(); i++) {
            int d = i - nums[i];
            int tem = dc[d];
            bprs += i - tem;
            dc[d] = tem + 1;
        }
        return bprs;
    }
};