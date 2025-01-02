class Solution {
public:
    bool is_vowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
            return true;
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>pref(words.size()+1);
        pref[0]=0;
        vector<int>res(queries.size());
        int n=words.size(),cnt=0;
        for(int i=0;i<n;i++){
            int sz=words[i].size();
            if(is_vowel(words[i][0]) && is_vowel(words[i][sz-1])){
                cnt++;
            }
            pref[i+1]=cnt;
        }
        for(int i=0;i<queries.size();i++)
            res[i]=pref[queries[i][1]+1]-pref[queries[i][0]];
        return res;
    }
};