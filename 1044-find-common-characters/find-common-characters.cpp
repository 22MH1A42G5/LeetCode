class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<map<char,int>>vec;
        int maxi = 0;
        string str1;
        for(int i = 0 ; i < words.size() ; i++){
            map<char,int>mp;
            for(int j = 0 ; j < words[i].size() ; j++){
                mp[words[i][j]]++;
            }
            if(maxi < words[i].size()){
                str1 = words[i];
                maxi = words[i].size();
            }
            vec.push_back(mp);
        }
        int cnt = 0;
        for(int i = 0 ; i < words.size() ; i++){
            if(str1==words[i]){
                cnt++;
            }
        }
        map<int,int>all;
        int minim = INT_MAX;
        for(int i = 0 ; i < words.size() ; i++){
            for(int j = 0 ; j < words[i].size() ; j++){
                all[words[i][j]]++;
            }
            if(words.size() < minim)
            minim = words.size();
        }
        vector<string>anse;
        if(all.size() == 1){
            char stri = words[0][0];
            for(int i = 0 ; i < minim ; i++){
                string st(1,stri);
                anse.push_back(st);
            }
            return anse;
        }
        if(cnt == words.size()){
            vector<string>finland;
            for(int i = 0 ; i < words.size() ; i++){
                for(int j = 0 ; j < words.size() ; j++){
                    string str2(1,words[i][j]);
                    finland.push_back(str2);
                }
            return finland;
            }
        }
        string st = "abcdefghijklmnopqrstuvwxyz";
        map<char,int>maxim;
        for(int i = 0; i ,i < st.size() ; i++){
            maxim[st[i]]=maxi;
        }
        for(int i = 0 ; i < vec.size() ; i++){
            for(int j = 0 ; j < words.size() ; j++){
                for(int k = 0 ; k < words[i].size() ; k++){
                    int mini = min(vec[i][words[j][k]],maxim[words[j][k]]);
                    maxim[words[j][k]] = mini;
                }
            }
        }
        vector<char>ans;
        vector<string>fin;
        for(auto it:maxim){
            if(it.second!=maxi && it.second!=0){
                for(int i = 1 ; i <= it.second ; i++){
                    ans.push_back(it.first);
                }
            }
        }
        for(int i = 0 ;i < ans.size() ; i++){
            string str(1,ans[i]);
            if(str!=" ")
            fin.push_back(str);
        }
        return fin;
    }
};