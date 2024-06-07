class Solution {
public:
    string replaceWords(vector<string>& dict, string st) {
        // vector<string>vec;
        // string s = "";
        // for(int i = 0 ; i < st.size() ; i++){
        //     if(st[i]==' '){
        //         vec.push_back(s);
        //         s.clear();
        //     }
        //     s+=st[i];
        // }
        string ans = "";
        map<string,int>mp;
        for(int i = 0 ; i < dict.size() ; i++){
            mp[dict[i]]=1;
        }
        string s = "";
        int i = 0;
        while(i < st.size()){
            if(st[i]==' '){
                ans+=st[i];
                s.clear();
                i++;
            }
            s+=st[i];
            if(mp[s]==0)
            ans+=st[i];
            if(mp[s]!=0){
                ans+=st[i];
                while(st[i]!=' ' && i < st.size()){
                    i++;
                }
                s.clear();
                if(i < st.size()-1)
                ans+=' ';
            }
            i++;
        }
        return ans;
    }
};