class Solution {
public:
    int prior(char ch){
        if(ch=='I') return 1;
        if(ch=='V') return 5;
        if(ch=='X') return 10;
        if(ch=='L') return 50;
        if(ch=='C') return 100;
        if(ch=='D') return 500;
        if(ch=='M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        stack<int>st;
        int su=0;
        for(int i=0;i<s.size();i++){
            if(st.empty() || prior(s[i])<=prior(st.top())){
                st.push(s[i]);
            }
            else{
                su+=prior(s[i])-prior(st.top());
                //st.push(prior(s[i])-prior(st.top()));
                st.pop();
                //st.push(prior(s[i])-an);
            }
        }
        while(!st.empty()){
            su+=prior(st.top());
            st.pop();
        }
        return su;
    }
};
