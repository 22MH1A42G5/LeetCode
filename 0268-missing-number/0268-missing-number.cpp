class Solution {
public:
    int missingNumber(vector<int>& v) {
        int fl = 0,s = 0,max = 0;
        for(int i = 0 ; i < v.size() ; i ++){
            if(v[i] == 0){
                fl = 1;
            }
            s+=v[i];
            if( v[i] > max){
                max = v[i];
            }
        }
        int ans=(max*(max+1))/2;
        if(fl == 0){
            return 0;
        }
        if(ans-s==0){
            return max+1;
        }
        return ans - s;
    }
};