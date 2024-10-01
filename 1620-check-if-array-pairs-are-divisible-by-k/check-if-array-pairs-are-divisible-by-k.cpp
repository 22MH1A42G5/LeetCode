class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> cnt(k, 0);
        for (int num : arr) {
            int rem = (num % k + k) % k;
            cnt[rem]++;
        }
        if (cnt[0] % 2 != 0) return false;
        
        for (int i = 1; i <= k / 2; ++i) {
            if (cnt[i] != cnt[k - i]) {
                return false;
            }
        }
        return true;
    }
};