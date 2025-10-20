class Solution {
public:
    int finalValueAfterOperations(vector<string>& v) {
        int x=0;
        for(int i=0;i<v.size();i++){
            if(v[i]=="X--"){
                x--;
            }
            else if(v[i]=="X++")
            x++;
            else if(v[i]=="++X")
            ++x;
            else{
                --x;
            }
        }
        return x;
    }
};