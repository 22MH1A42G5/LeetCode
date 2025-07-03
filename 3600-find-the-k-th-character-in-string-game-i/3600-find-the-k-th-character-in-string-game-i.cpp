class Solution {
public:
    char kthCharacter(int k) {
        string s="a",sub="";
        int te = k;
        while(s.size() < k){
            for(int i = 0 ; i < s.size() ; i++){
                sub+=s[i]+1;
            }
            // cout<<sub<<" ";
            s+=sub;
            // cout<<s<<" ";
            sub="";
        }
        cout<<s;
        return s[te-1];
    }
};