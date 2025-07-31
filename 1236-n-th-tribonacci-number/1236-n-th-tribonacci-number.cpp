class Solution {
public:
    int tribonacci(int n) {
        int f=2,a=0,b=1,c=1,d,i;
        if(n==0)
            return 0;
        if(n==1 || n==2)
            return 1;
        for(i=0;i<n-2;i++){
            d=a+b+c;
            a=b;
            b=c;
            c=d;
        }
        return d;
    }
};