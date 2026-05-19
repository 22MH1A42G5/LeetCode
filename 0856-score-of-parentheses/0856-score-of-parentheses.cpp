class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int cnt = 0, val;
        for(int i = 0; i < s.size(); i++) {
            val = 0;
            if(s[i] == '(') {
                st.push(0);
            }
            else {
                while(st.top() != 0) {
                    val += st.top();
                    st.pop();
                }
                val = max(2*val, 1);
                st.pop();
                st.push(val);
            }
        }
        while(!st.empty()) {
            cnt += st.top();
            st.pop();
        }
        return cnt;
    }
};