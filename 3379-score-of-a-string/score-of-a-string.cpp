class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        for(int i = 0; i < s.size()-1 ; i++){
            int t=s[i];
            int t1=s[i+1];
            ans+=abs(t-t1);
            
        }
        cout<<ans;
        return ans;
    }
};