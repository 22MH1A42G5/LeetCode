class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char>st;
        int ans = 0;
        if(x > y){
            for(int i = 0 ; i < s.size() ; i++){
                if(st.empty()){
                    st.push(s[i]);
                }
                else if(st.top() == 'a' && s[i] == 'b'){
                    ans+=x;
                    st.pop();
                }
                else
                st.push(s[i]);
            }
        }
        else{
            for(int i = 0 ; i < s.size() ; i++){
                if(st.empty()){
                    st.push(s[i]);
                }
                else if(st.top() == 'b' && s[i] == 'a'){
                    ans+=y;
                    st.pop();
                }
                else
                st.push(s[i]);
            }
        }
        string str = "";
        while(!st.empty()){
            // string te(st.top(),1);
            str+=st.top();
            st.pop();
        }
        s.clear();
        reverse(str.begin(),str.end());
        s = str;
        if(x > y){
            for(int i = 0 ; i < s.size() ; i++){
                if(st.empty()){
                    st.push(s[i]);
                }
                else if(st.top() == 'b' && s[i] == 'a'){
                    ans+=y;
                    st.pop();
                }
                else
                st.push(s[i]);
            }
        }
        else{
            for(int i = 0 ; i < s.size() ; i++){
                if(st.empty()){
                    st.push(s[i]);
                }
                else if(st.top() == 'a' && s[i] == 'b'){
                    ans+=x;
                    st.pop();
                }
                else
                st.push(s[i]);
            }
        }
        return ans;
    }
};