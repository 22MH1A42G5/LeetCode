class Solution {
public:
    void fun(int close,int open,string s,int n,vector<string>&v){
        if(close>open){
            return;
        }
        if(close+open >= 2*n){
            v.push_back(s);
            cout<<s<<endl;
            return;
        }
        if(open==n){
            fun(close+1,open,s+')',n,v);
        }
        else{
            fun(close+1,open,s+')',n,v);
            fun(close,open+1,s+'(',n,v);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        fun(0,1,"(",n,v);
        return v;
    }
};