class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mx=0,j=0;
        map<int,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            if(mpp[s[i]]==2){
                while(mpp[s[i]]>1){
                    mpp[s[j]]--;
                    j++;
                }
            }
            if((i-j)+1>mx)
                mx=(i-j)+1;
        }
        return mx;
    }
};