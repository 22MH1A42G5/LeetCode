class Solution {
public:
    bool scoreBalance(string s) {
        int res = 0 , n = s.size();
        int i = 0;
        while(i < n){
            res += s[i]- 'a' + 1;
            i++;
        }
        int rem = 0;
        i = 0;
        while(i < n){
            rem += s[i] - 'a' + 1;
            if(res - rem == rem) return true;
            i++;
        }
        return false;
    }
};