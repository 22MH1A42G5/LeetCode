class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i = 0 ; i < s.size() ; i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
                if(s[i] >= '0' && s[i] <= '9'){
                    str += s[i];
                }
                else{
                    str += tolower(s[i]);
                }
            }
        }
        string temp = str;
        reverse(temp.begin() , temp.end());
        return (str == temp);
    }
};