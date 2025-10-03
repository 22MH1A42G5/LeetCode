class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp;
        if(s.size()!=t.size())
        return false;
        for(int i = 0; i < s.size() ; i++){
            mp[s[i]]++;
        }
        /*for(auto it:mp){
            cout<<it.first<<" "<<it.second<<endl;
        }*/
        for(auto it:mp){
            cout<<it.first<<" "<<it.second<<endl;
        }
        for(int i=0;i<s.size();i++){
            if(mp[t[i]]<=0){
                return false;
            }
            else{
                mp[t[i]]--;
            }
        }
        return true;
    }
};