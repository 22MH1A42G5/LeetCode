class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        // cout << "HI";
        int n = grid.size();
        vector<int>vec;
        int res=0;
        for(int i = 0 ; i < n ;i++) {
            int zs = 0;
            for(int j = n-1 ; j >= 0 ; j--){
                // cout << grid[i][j] << " ";
                if(grid[i][j] == 0){
                    zs++;
                }
                else
                break;
            }
            // cout <<zs << "\n";
            vec.push_back(zs);
        }
        // for(int i = 0 ; i < n ; i++){
        //     cout << vec[i] << " ";
        // }
        cout << "\n";
        for(int i = 0 ;i < n ; i++){
            if(vec[i] >= n-i-1){
                continue;
            }
            int j , ind = -1;
            for(j = i+1 ; j < n ; j++){
                if(vec[j] >= n-i-1) {
                    ind = j;
                    break;
                }
            }
            if(ind == -1)
            return ind;
            int temp = ind-i;
            // cout << temp;
            // cout << ind << " ";
            while(temp) {
                if(ind == 0) break;
                // cout << ind << " " << j-1 << "\n";
                // cout << vec[j] << " " << vec[j-1];
                swap(vec[ind] , vec[ind-1]);
                ind--;
                temp--;
                res++;
            }
        }
        cout << "\n";
        // for(int i = 0 ; i < n ; i++) {
        //     cout << vec[i] << " ";
        // }
        // cout << res;
        return res;
    }
};