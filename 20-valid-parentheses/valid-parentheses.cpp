class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.size()==1){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(!st.empty() and s[i]==')' and st.top()=='('){
                st.pop();
            }
            else if(!st.empty() and s[i]=='}' and st.top()=='{'){
                st.pop();
            }
            else if(!st.empty() and s[i]==']' and st.top()=='['){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};