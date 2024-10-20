class Solution {
public:
    vector<string> stringSequence(string tar) {
        map<char,int>mp;
        string str="";
        vector<string>ans;
        for(int i = 0 ; i < 26 ; i++){
            mp[char(i+97)] = i+1;
        }
        for(auto it:mp){
            cout<<it.first<<" ";
        }
        for(int i = 0 ; i < tar.size() ; i++){
            for(int j = 0 ; j < mp[tar[i]] ; j++){
                str += char(j+97);
                ans.push_back(str);
                if(str[str.size()-1] != tar[i])
                str.pop_back();
            }
        }
        return ans;
    }
};