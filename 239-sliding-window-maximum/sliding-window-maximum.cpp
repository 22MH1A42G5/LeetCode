class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& vec, int k) {
        deque<int>dq;
        int n = vec.size();
        // for(int i = 0 ;i < k ; i++){
        //     while(!dq.empty() && vec[i] < vec[dq.back()])
        //     dq.pop_back();
        //     dq.push_back(i);
        // }
        // cout<<dq.front()+1<<" ";
        vector<int>ans;
        for(int i = 0 ; i < n; i++){
            if(!dq.empty() && i - k == dq.front())
            dq.pop_front();
            while(!dq.empty() && vec[i] >= vec[dq.back()])
            dq.pop_back();
            dq.push_back(i);
            if(i >= k-1)
            ans.push_back(vec[dq.front()]);
        }
        return ans;
    }
};