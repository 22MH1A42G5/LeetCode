class Solution {
public:
    bool checkValidString(string s) {
        stack<int> a,b;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') { a.push(i); }
            else if(s[i]==')'&&a.size()) { a.pop(); }
            else if(s[i]==')'&&b.size()) { s[b.top()]='(', b.pop(); }
            else if(s[i]==')') { return 0; }
            else if(s[i]=='*') { b.push(i); }
        }
        while(a.size()) { a.pop(); }
        while(b.size()) { b.pop(); }
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==')') { a.push(i); }
            else if(s[i]=='('&&a.size()) { a.pop(); }
            else if(s[i]=='('&&b.size()) { s[b.top()]='(', b.pop(); }
            else if(s[i]=='(') { return 0; }
            else if(s[i]=='*') { b.push(i); }
        }
        return !a.size();
    }
};