class Solution {
public:
    int SetBits(int n){
        int cnt=0;
        while(n!=0){
            if((n&1)==1)
                cnt++;
            n>>=1;
        }
        return cnt;
    }
    int minimizeXor(int num1, int num2) {
        int target=SetBits(num2);
        int cnt=SetBits(num1);
        if(target==cnt)
            return num1;
        else if(target>cnt){
            int ind=0;
            while(target>cnt){
                int temp=1<<ind;
                if((temp&num1)==0){
                    num1|=temp;
                    cnt++;
                }
                ind++;
            }
            return num1;
        }
        else{
            int ind=0;
            while(target<cnt){
                int temp=1<<ind;
                if((temp&num1)!=0){
                    num1&=~(temp);
                    cnt--;
                }
                ind++;
            }
            return num1;
        }
        return -1;
    }
};