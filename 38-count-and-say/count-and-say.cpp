class Solution {
public:
    string countAndSay(int n) {
        string ans,s="1";
        int cnt=1,i,j; 
        if(n==1)
        return s;
        for(i=2;i<=n;i++){
            string k="";
            cnt=1;
            for(j=0;j<s.size()-1;j++){
                if(s[j]==s[j+1]){
                    cnt++;
                }
                else{
                    k+=to_string(cnt)+s[j];
                    cnt=1;
                }
            }
            k+=to_string(cnt)+s[j];
            s=k;
        }
        return s;
    }
};