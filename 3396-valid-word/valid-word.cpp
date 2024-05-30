class Solution {
public:
    bool isValid(string word) {
        int v=0 , c=0 , d = 0;
        if(word.size() < 3){
            return false;
        }
        for(int i = 0 ; i < word.size() ; i++){
            if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U'){
                v=1;
            }
            else if((word[i]>='a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z')){
                d=1;
            }
            else if(word[i]>= '0' && word[i]<='9'){
                // just leave
            }
            else{
                return false;
            }
        }
        if(v==1 && d==1)
            return true;
        return false;
    }
};