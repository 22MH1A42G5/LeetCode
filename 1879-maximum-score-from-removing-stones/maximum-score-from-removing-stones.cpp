class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>que;
        que.push(a);
        que.push(b);
        que.push(c);
        int ans = 0;
        while(que.size()>1){
            ans++;
            int te = que.top();
            te--;
            que.pop();
            int te1 = que.top();
            te1--;
            que.pop();
            if(te > 0)
            que.push(te);
            if(te1 > 0)
            que.push(te1);
        }
        return ans;
    }
};