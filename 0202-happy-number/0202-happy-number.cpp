class Solution {
public:
    int SquareSum(int n){
        int rem,s=0;
        while(n){
            rem = n%10;
            s += rem*rem;
            n/=10;
        }
        return s;
    }
    bool isHappy(int n) {
        map<int,int>mp;
        while(true){
            if(n == 1){
                return true;
            }
            if(mp[n] != 0){
                return false;
            }
            mp[n]++;
            n=SquareSum(n);
        }
        return true;
    }
};