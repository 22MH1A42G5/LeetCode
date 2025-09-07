class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>vec(n,0);
        for(int i = 1 ; i <= n/2 ; i++) vec[i-1] = i;
        for(int i = 1 ; i <= n/2 ; i++){
            vec[n-i] = -i;
        }
        return vec;
    }
};