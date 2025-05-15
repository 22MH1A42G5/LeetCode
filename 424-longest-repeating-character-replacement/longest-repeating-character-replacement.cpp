class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>alphas(26,0);
        int l = 0 , r = 0 , mxlen = 0 , maxi = 0;
        while(r < s.size()){
            alphas[s[r]-'A']++;
            maxi = max(alphas[s[r] - 'A'] , maxi);
            while( ((r-l+1)-maxi) > k){
                alphas[s[l] - 'A']--;
                l++;
                for(int k = 0 ; k < 25;k++){
                    maxi = max(maxi , alphas[k]);
                }
            }
            if(mxlen < (r-l+1)){
                mxlen = (r-l+1);
            }
            r++;
        }
        return mxlen;
    }
};