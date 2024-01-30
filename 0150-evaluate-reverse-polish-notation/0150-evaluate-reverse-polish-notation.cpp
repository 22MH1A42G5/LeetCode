class Solution {
public:
    int evalRPN(vector<string>& vec) {
        stack<int>st;
        for(int i=0;i<vec.size();i++){
            if(vec[i]=="*" || vec[i]=="-" || vec[i]=="+" || vec[i]=="/"){
                int ans;
                //cout<<st.top()<<" ";
                int d1=st.top();
                st.pop();
                int d2=st.top();
                st.pop();
                if(vec[i]=="*"){
                    ans=d1*d2;
                }
                else if(vec[i]=="-"){
                    ans=d2-d1;
                }
                else if(vec[i]=="+"){
                    ans=d1+d2;
                }
                else if(vec[i]=="/"){
                    ans=d2/d1;
                }
                cout<<vec[i]<<" ";
                st.push(ans);
            }
            else{
                //cout<<vec[i]<<" ";
                int n=stoi(vec[i]);
                st.push(n);
            }
            st.top();
        }
        return st.top();
    }
};