class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& col) {
        int n = col.size();
        int ans = 0;
        for(int i = 0 ; i < col.size()-2 ; i++){
            if( (col[i] == col[i+2]) && (col[i] != col[i+1]) ){
                ans++;
            }
        }
        if(col[n-2] == col[0] && col[n-1] != col[0]){
            ans++;
        }
        if(col[n-1] == col[1] && col[0] != col[1] ){
            ans++;
        }
        return ans;
    }
};