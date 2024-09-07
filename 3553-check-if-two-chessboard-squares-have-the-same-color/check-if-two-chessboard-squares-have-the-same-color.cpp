class Solution {
public:
    bool checkTwoChessboards(string c1, string c2) {
        int a = (int)c1[0];
        int a1 = (int)c1[1];
        int b = (int)c2[0];
        int b1 = (int)c2[1];
        int ans = 0;
        if(a%2 == 0){
            if(a1 % 2 == 0){
                ans = 1;
            }
            else 
            ans = 0;
        }
        else{
            if(a1 % 2 == 1){
                ans = 1;
            }
            else
            ans = 0;
        }
        int ans1 = -1;
        if(b%2 == 0){
            if(b1 % 2 == 0){
                ans1 = 1;
            }
            else 
            ans1 = 0;
        }
        else{
            if(b1 % 2 == 1){
                ans1 = 1;
            }
            else
            ans1 = 0;
        }
        if(ans == ans1)
        return true;
        else 
        return false;

    }
};