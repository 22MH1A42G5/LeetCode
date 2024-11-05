class Solution {
public:
    int minChanges(string s) {
        int on = 0,z = 0,ans = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '1'){
                if(z%2 != 0){
                    z++; ans++;
                }
                else
                on++;
            }
            else{
                if(on%2 != 0){
                    on++;
                    ans++;
                }
                else
                z++;
            }
        }
        return ans;
    }
};