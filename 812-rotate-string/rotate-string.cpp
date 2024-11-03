class Solution {
public:
    bool rotateString(string s, string g) {
        if(s.size() != g.size())
        return false;
        int t = s.size();
        int n = t;
        char ch;
        while(t--){
            if(s == g){
                return true;
            }
            ch = s[n-1];
            s.pop_back();
            reverse(s.begin(),s.end());
            s+=ch;
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }
        return false;
    }
};