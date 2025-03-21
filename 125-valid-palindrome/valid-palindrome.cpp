class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
        for(int i = 0 ; i < s.size(); i++ ){
            int ch=int(s[i]);
            if((ch >= 65 and ch<=90) || (ch >= 97 and ch <= 122) || (ch >= 48 and ch<=57)){

                st+=(tolower(s[i]));
            }
        }
        string st1=st;
        reverse(st1.begin(),st1.end());
        if(st1==st)
        return true;
        else 
        return false;
    }
};