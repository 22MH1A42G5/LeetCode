class Solution {
public:
    int smallestEvenMultiple(int n) {
        int i=1;
        while(true){
            if((i*n)%2==0)
            return i*n;
            i++;
        }
        
    }
};