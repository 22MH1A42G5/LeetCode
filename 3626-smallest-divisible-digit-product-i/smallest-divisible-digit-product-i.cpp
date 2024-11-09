class Solution {
public:
    int fun(int n){
        int p=1;
        while(n!=0){
            p=p*(n%10);
            n/=10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        while(n){
            if(fun(n)%t==0)
                    return n;
            n++;
        }
        return -1;
    }
};