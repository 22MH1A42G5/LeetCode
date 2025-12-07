class Solution {
public:
    bool setbit(int xor_val, int num) {
        int msb = -1;

        for (int bit = 31; bit >= 0; bit--) {
            int mask = 1 << bit;
            if (xor_val & mask) {
                msb = bit;
                break;
            }
        }

        if (msb == -1) return false;

        int mask = 1 << msb;
        return (num & mask) != 0;
    }
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int xor_var = 0;
        int n = grid.size();
        n = n*n;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[i].size() ; j++){
                xor_var ^= grid[i][j];
            }
        }
        for(int i = 0 ; i < n ; i++){
            xor_var ^= (i+1);
        }
        int dup = 0 , mis = 0;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[i].size() ; j++){
                if(setbit(xor_var , grid[i][j])){
                    dup ^= grid[i][j];
                }
                else{
                    mis ^= grid[i][j];
                }
            }
        }
        for(int i = 1 ; i <= n ; i++){
            if(setbit(xor_var , i)){
                dup ^= i;
            }
            else{
                mis ^= i;
            }
        }
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[i].size() ; j++){
                if(mis == grid[i][j]){
                    swap(dup , mis);
                    break;
                }
            }
        }
        return {dup , mis};
    }
};