class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size()-1;i++){
            for(int j=i+1;j<words.size();j++){
                string s1=words[i];
                string s2=words[j];
                if(s1.size()>s2.size())
                    continue;
                string a=s2.substr(0,s1.size());
                string b=s2.substr(s2.size()-s1.size());
                if(a==s1 && b==s1)
                    ans++;
            }
        }
        return ans;
    }
};