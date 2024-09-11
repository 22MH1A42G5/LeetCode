class Solution {
public:
    int minBitFlips(int s, int g) {
        int c,cnt = 0;
        c = s ^ g;
        while( c ){
            if(c%2 == 1){
                cnt++;
            }
            c/=2;
        }
        return cnt;
    }
};