class Solution {
public:
    string reverseWords(string s) {
        vector<string>vec;
        for(int i = 0 ; i < s.size() ; i++){
            string ans = "";
            if(s[i]==' '){
                while(s[i]==' ' && i < s.size()){
                    i++;
                }
            }
            while(s[i]!=' ' && i < s.size()){
                ans+=s[i];
                i++;
            }
            vec.push_back(ans);
        }
        string ans="";
        reverse(vec.begin(),vec.end());
        for(int i = 0 ; i < vec.size() ; i++){
            for(int j = 0 ; j < vec[i].size() ; j++){
                ans+=vec[i][j];
            }
            ans+=' ';
        }
        if(ans[ans.size()-1]==' ')
        ans.pop_back();
        if(ans[0]==' ')
        ans.erase(ans.begin()+0);
        // cout<<ans;
        // reverse(ans.begin(),ans.end());
        return ans;
        
    }
};