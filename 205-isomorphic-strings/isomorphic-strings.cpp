class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int>mp1;
        map<char,int>mp2;
        vector<int>v1;
        vector<int>v2;
        for(int i = 0 ; i < s.size() ; i++){
            mp1[s[i]]++;
        }
        for(int i = 0 ; i < t.size() ; i++){
            mp2[t[i]]++;
        }
        for(auto it:mp1){
            v1.push_back(it.second);
        }
        for(auto it: mp2){
            v2.push_back(it.second);
        }
        for(int i = 0 ; i < v1.size() ; i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        for(int i = 0 ; i < v2.size() ; i++){
            cout<<v2[i]<<" ";
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1!=v2)
            return false;
        map<char,char>mp;
        for(int i = 0 ; i < s.size() ; i++){
            if(mp[s[i]]==0)
            mp[s[i]]=t[i];
            else if(mp[s[i]]==t[i])
            continue;
            else
            return false;
        }
        return true;
    }
};