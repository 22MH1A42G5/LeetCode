class Solution {
public:
    long long pickGifts(vector<int>& gif, int k) {
        long long ans = 0;
        priority_queue<int>pq;
        for(int i = 0 ; i < gif.size() ; i++){
            pq.push(gif[i]);
        }
        for(int i = 0 ; i < k ; i++){
            int te = sqrt(pq.top());
            pq.pop();
            pq.push(te);
        }
        while(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};