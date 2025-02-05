class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        string ts1 = s1 , ts2 = s2;
        if(s1 == s2)
        return true;
        if(s1.size() != s2.size())
        return false;
        int cnt = 0;
        int ind = -1;
        char fr , en;
        for(int i = 0 ; i < s1.size() ; i++){
            if(s1[i] != s2[i]){
                cnt++;
                if(ind == -1){
                    fr = s1[i];
                    en = s2[i];
                    ind = i;
                }
            }
            if(cnt == 2){
                if(fr == s2[i] && en == s1[i]){
                    swap(s1[ind] , s1[i]);
                    if(s1 == s2)
                    return true;
                    else
                    return false;
                }
                return false;
            }
        }
        if(cnt == 1)
        return false;
        return true;
    }
};