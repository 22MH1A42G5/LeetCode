class Solution {
public:
    int maxScore(string s) {
        int cnt = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '1')
            cnt++;
        }
        int i = 0 , c0 = 0 , c1 = cnt;
        int maxi = 0;
        while(i < s.size()-1){
            if(s[i] == '0')
                c0++;
            else
                c1--;
            maxi = max(maxi,c0+c1);
            i++;
        }
        return maxi;
    }
};