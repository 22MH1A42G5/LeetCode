class Solution {
public:
    bool reportSpam(vector<string>& m, vector<string>& b) {
        unordered_map<string,int>mess;
        unordered_map<string,int>bann;
        int cnt=0;
        for(int i=0;i<b.size();i++)
            bann[b[i]]++;
        for(int i=0;i<m.size();i++){
            if(bann[m[i]]!=0)
                cnt++;
        }
        return cnt>=2;
    }
};