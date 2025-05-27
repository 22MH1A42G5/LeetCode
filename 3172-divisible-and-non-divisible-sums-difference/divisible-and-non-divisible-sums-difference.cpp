class Solution {
public:
    int differenceOfSums(int n, int m) {
        int te = n/m,s=0;
        while(te){
            s += (m*te);
            te--;
        }
        int tot = (n*(n+1))/2;
        return (tot-(2*s));
    }
};