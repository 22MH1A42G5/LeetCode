class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        for(int i = 0 ; i < words.size() ; i++){
            if(words[i].size() >= pref.size()){
                string sub = words[i].substr(0,pref.size());
                if(sub == pref)
                ans+=1;
            }
        }
        return ans;
    }
};
