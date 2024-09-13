class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> x(arr.size() + 1);
        for (int i = 0; i < arr.size(); i++) {
            x[i + 1] = x[i] ^ arr[i];
        }
        vector<int> res;
        for (auto& q : queries) {
            res.push_back(x[q[1] + 1] ^ x[q[0]]);
        }
        return res;
    }
};