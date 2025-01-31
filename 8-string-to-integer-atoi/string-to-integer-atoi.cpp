class Solution {
public:
    int main = 0;
    int fl = 0;
    int main1;
    int Add_to_main(char num){
        int n = num;
        n = num - 48;
        long long temp = ((long long)main * 10) + n;
        if(temp > 2147483647){
            fl = 1;
            main1 = 2147483648;
            return 2147483648;
        }
        if(temp < -2147483647){
            fl = 1;
            main1 = -2147483647;
            return -2147483647;
        }
        main = ((main * 10) + n);
        return 1;
    }
    int Recursion(string &s ,int i , int &sign , int start){
        if(i >= s.size()){
            return 1;
        }
        if((s[i] == ' ' || s[i] == '-' || s[i] == '+') && start == 1){
            return 0;
        }
        else if(s[i] == ' ' && start == 0){
            start = 0;
        }
        else if(s[i] == '-' && start == 0){
            // cout<<"HI";
            start = 1;
            sign = -1;
        }
        else if(s[i] == '+' && start == 0){
            start = 1;
            sign = 1;
        }
        else if('0' <= s[i] && ('9' >= s[i])){
            // cout<<s[i]<<" ";
            start = 1;
            int te = Add_to_main(s[i]);
            if(te != 1)
            return te;
        }
        else{
            return 0;
        }
        Recursion(s , i + 1 , sign , start);
        return 1;
    }
    int myAtoi(string s) {
        int i = 0 , lead = 0 , sign = 1 , start = 0;
        int ans = Recursion(s , i , sign , start);
        if(ans == 1){
            if(fl == 1){
                cout<<"HI";
                if(sign == 1)
                return 2147483647;
                else
                return -2147483648;
            }
            else{
                cout<<"HI";
                return main * sign;
            }
        }
        else{
            return 0;
        }
    }
};