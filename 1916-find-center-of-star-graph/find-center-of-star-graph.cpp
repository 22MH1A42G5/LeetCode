class Solution {
public:
    int findCenter(vector<vector<int>>& a) {
        if(a[0][0]==a[1][0]||a[0][0]==a[1][1]) return a[0][0];
        return a[0][1];
    }
};