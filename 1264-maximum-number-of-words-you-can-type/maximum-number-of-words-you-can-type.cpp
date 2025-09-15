class Solution {
public:
    int canBeTypedWords(string text, string brok) {
        unordered_map<char,int>mpp;
        for(int i = 0 ; i < brok.size() ; i++){
            mpp[brok[i]]++;
        }
        int fl = 0 , ans = 0;
        for(int i = 0 ;i < text.size() ; i++){
            if(text[i] == ' '){
                if(fl == 0) ans++;
                else fl = 0;
            }
            if(mpp[text[i]] != 0){
                fl = 1;
            }
        }
        if(fl == 0) ans++;
        return ans;
    }
};