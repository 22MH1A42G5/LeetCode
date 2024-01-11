class Solution {
public:
    int calPoints(vector<string>& s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]!="C" && s[i]!="D" && s[i]!="+"){
                st.push(stoi(s[i]));
            }
            else if(s[i]=="C"){
                st.pop();
            }
            else if(s[i]=="D"){
                st.push(2*st.top());
            }
            else if(s[i]=="+"){
                int c=st.top();
                st.pop();
                int d=st.top();
                st.push(c);
                st.push(c+d);
            }
        }
        int su=0;
        if(st.empty())
        return 0;
        while(!st.empty()){
            su+=st.top();
            st.pop();
        }
        return su;
    }
};