class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n = wordList.size();
        queue<pair<string,int>>que;
        que.push({beginWord , 1});
        unordered_map<string,int>mpp;
        for(int i = 0 ; i < n ; i++){
            mpp[wordList[i]] = 1;
        }
        while(!que.empty()){
            string st = que.front().first;
            int d = que.front().second;
            if(que.front().first == endWord)
                return que.front().second;
            que.pop();
            // cout << st << " ";
            for(int i = 0 ; i < st.size() ; i++){
                string str = st;
                for(int j = 0 ; j < 26 ; j++){
                    str[i] = 'a'+ j;
                    if(mpp[str] == 1){
                        mpp.erase(str);
                        que.push({str , d + 1});
                        // cout << str << " ";
                    }
                }
            }
            // queue<pair<string,int>>que1=que;
            // while(!que1.empty()){
            //     cout<<que1.front().first << " " << que1.front().second << endl;
            //     que1.pop();
            // }
            // cout << endl;

        }
        return 0;
    }
};