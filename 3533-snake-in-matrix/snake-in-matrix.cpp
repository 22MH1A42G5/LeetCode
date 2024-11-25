class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& com) {
        int i = 0 , j = 0;
        for(int k = 0 ; k < com.size() ; k++){
            if(com[k] == "DOWN"){
                i++;
            }
            else if(com[k] == "RIGHT"){
                j++;
            }
            else if(com[k] == "UP"){
                i--;
            }
            else{
                j--;
            }
        }
        return (i * n) + j;
    }
};