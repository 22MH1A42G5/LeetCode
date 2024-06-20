class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string st = strs[0];
        for(int i = 1 ; i < strs.size() ; i++){
            string te = "";
            int j = 0;
            while( j < strs[i].size()){
                if(st[j] == strs[i][j]){
                    te+=strs[i][j];
                }
                else
                break;
                j++;
            }
            st = te;
        }
        return st;
    }
};