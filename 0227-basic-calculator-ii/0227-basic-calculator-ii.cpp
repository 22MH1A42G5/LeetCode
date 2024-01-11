class Solution {
public:
    int priority(char op){
        if(op=='+' || op=='-')
        return 1;
        else{
            return 2;
        }
    }
    int evaluate(int n1,int n2,char op){
        if(op== '*') return n2*n1;
        if(op=='+') return n2+n1;
        if(op=='-') return n2-n1;
        if(op=='/') return (int)n2/n1;
        return 0;
    }
    int calculate(string s) {
            stack<int>nums;
        stack<char>opr;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                    continue;
            }
            if(s[i] <='9' && s[i]>='0'){
                int n=0;
                while(s[i] <= '9' && s[i]>='0'){
                    n=n*10+int(s[i]-'0');
                    i++;
                }
                i-=1;
                nums.push(n);
            }
            else{
                if(opr.empty()){
                    opr.push(s[i]);
                }
                else{

                    if(priority(s[i])>priority(opr.top())) {
                        opr.push(s[i]);
                    }
                    else{
                        while(priority(s[i])<=priority(opr.top())){
                            int n1=nums.top();
                            nums.pop();
                            int n2=nums.top();
                            nums.pop();
                            int ans=evaluate(n1,n2,opr.top());
                            nums.push(ans);
                            opr.pop();
                            if(opr.empty()){
                                break;
                            }
                        }
                        opr.push(s[i]);
                    }
                }
            }
        }
        while(!opr.empty()){
            int n1=nums.top();
            nums.pop();
            int n2=nums.top();
            nums.pop();
            int ans=evaluate(n1,n2,opr.top());
            nums.push(ans);
            opr.pop();
        }
        return nums.top();

    }
};