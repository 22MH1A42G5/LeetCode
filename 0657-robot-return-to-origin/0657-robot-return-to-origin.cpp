class Solution {
public:
    bool judgeCircle(string moves) {
        int ans1 = 0 , ans2 = 0;
        for(int i = 0 ; i < moves.size() ; i++){
            if(moves[i] == 'L'){
                ans1++;
            }
            else if(moves[i] == 'R'){
                ans1--;
            }
            else if(moves[i] == 'U'){
                ans2++;
            }
            else{
                ans2--;
            }
        }
        return ((ans1==0) && (ans2 == 0));
    }
};
// LDRRLRUULR
// UUUURRRR