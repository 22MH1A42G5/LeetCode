class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt = 0;
        for(int i = 0 ; i < logs.size() ; i++){
            int len = logs[i].size();
            if(len == 1) continue;
            if(len == 2){
                if(logs[i][1] == '/' && logs[i][0]!='.')
                cnt++;
                else
                continue;
            }
            else{
                if(  (logs[i][len-3] == '.') && (logs[i][len-2] == '.') && (logs[i][len-1] == '/') ){
                    if(cnt != 0)
                    cnt--;
                }
                else if( (logs[i][len-2] != '.') && (logs[i][len-1] == '/') ){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};