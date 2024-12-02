class Solution {
public:
    int isPrefixOfWord(string s, string w) {
        string t="";
        int cnt=1,j=0,k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                t="";
                cnt++;
            }
            else{
                t+=s[i];
                if(t==w)
                    return cnt;
            }
        }
        return -1;
    }
};