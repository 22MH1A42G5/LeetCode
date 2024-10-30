class Solution {
public:
    bool judgeCircle(string moves) {
        map<char,int>mpp;
        for(int i = 0 ;i < moves.size() ; i++){
            mpp[moves[i]]++;
        }
        if(mpp['U'] == mpp['D'] && mpp['R'] == mpp['L']){
            return true;
        }
        return false;
    }
};