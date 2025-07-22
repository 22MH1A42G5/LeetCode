class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& brd) {
        vector<int>vec(10 , 0);
        for(int i = 0 ; i < brd.size() ; i++){
            fill(vec.begin(),vec.end(),0);
            for(int j = 0 ; j < brd[i].size() ; j++){
                if(brd[i][j] == '.') continue;
                if(vec[brd[i][j] - '1'] == 1){
                    return false;
                }
                vec[brd[i][j] - '1'] = 1;
            }
        }
        for(int i = 0 ; i< brd.size() ; i++){
            fill(vec.begin(),vec.end(),0);
            for(int j = 0 ; j < brd[i].size() ; j++){
                if(brd[j][i] == '.') continue;
                if(vec[brd[j][i] - '1'] == 1){
                    return false;
                }
                vec[brd[j][i] - '1'] = 1;
            }
        }
        for(int i = 0; i <= 8 ; i+=3){
            for(int j = 0 ; j<= 8 ; j+=3){
                fill(vec.begin() , vec.end() , 0);
                for(int k = i ; k <= (2+i) && k <= 8; k++){
                    for(int l = j ; l <= (2+j) && l <= 8 ; l++){
                        // if(j == 3 && i == 0)
                        // cout << brd[k][l] <<" ";
                        if(brd[k][l] == '.') continue;
                        // cout << k << l << " ";
                        if(vec[brd[k][l] - '1'] == 1){
                            return false;
                        }
                        vec[brd[k][l] - '1'] = 1;
                    }
                    // cout<<"\n";
                }
                // cout << "\n";
            }
        }
        return true;
    }
};