class Solution {
public:
    long long minimumSteps(string s) {
        long long tem=0,ans=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='0')
                tem++;
            else
                ans+=tem;
        }
        return ans;
    }
};