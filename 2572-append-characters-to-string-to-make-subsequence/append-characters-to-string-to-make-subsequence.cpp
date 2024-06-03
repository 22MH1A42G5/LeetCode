class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0 , j = 0 , cnt = 0 , mi = INT_MAX;
        while(i < s.size() ){
            if(j>=t.size())
            return 0;
            if(s[i]==t[j]){
                j++;
            }
            i++;
        }
        return t.size()-j;
    }
};