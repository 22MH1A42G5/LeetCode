class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>mpp;
        for(int i = 0 ;i < s.size() ; i++){
            mpp[s[i]]++;
        }
        int vmaxi = 0;
        vmaxi = max(vmaxi , mpp['a']);
        vmaxi = max(vmaxi , mpp['e']);
        vmaxi = max(vmaxi , mpp['i']);
        vmaxi = max(vmaxi , mpp['o']);
        vmaxi = max(vmaxi , mpp['u']);
        int cmaxi = 0;
        for(auto it:mpp){
            if(it.first != 'a' && it.first!= 'e' && it.first != 'i' && it.first != 'o' && it.first != 'u'){
                cmaxi = max(cmaxi , it.second);
            }
        }
        return cmaxi + vmaxi;
    }
};