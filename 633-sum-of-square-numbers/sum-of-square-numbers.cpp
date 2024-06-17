class Solution {
public:
    bool judgeSquareSum(int c) {
        long long j = sqrt(c);
        long long i = 0;
        while(i <= j){
            if( ((i*i) + (j*j)) > c ){
                j--;
            }
            else if( (i*i) + (j*j) < c){
                i++;
            }
            else if((i*i) + (j*j) == c){
                return true;
            }
        }
        return false;
    }
};