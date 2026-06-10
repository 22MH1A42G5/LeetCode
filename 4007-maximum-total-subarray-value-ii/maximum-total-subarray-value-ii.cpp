class MaxSegmentedTree {
    vector<int> seg;
    vector<int> arr;
    public:
    MaxSegmentedTree(vector<int> vec) {
        this -> arr = vec;
        seg.resize(4 * arr.size(), INT_MIN);
        build(0,0,vec.size()-1);
    }
    void build(int ind, int low, int high) {
        if(low == high) {
            seg[ind] = arr[low];
            return;
        }
        int mid = (low+high)/2;
        build(ind*2+1, low, mid);
        build(ind*2+2, mid+1, high);
        seg[ind] = max(seg[ind*2+1], seg[ind*2+2]);
    }
    int queryHelper(int ind, int low, int high, int l, int r) {
        if(l <= low && r >= high) {
            return seg[ind];
        }
        if(high < l || r < low) {
            return INT_MIN;
        }
        int mid = (low + high)/2;
        int left = queryHelper(ind*2+1, low, mid, l, r);
        int right = queryHelper(ind*2+2, mid+1, high, l,r);
        return max(left, right);
    }
    int query(int left, int right) {
        // for(int i = 0; i < 3*arr.size(); i++) {
        //     cout << seg[i] << " ";
        // }
        return queryHelper(0, 0, arr.size()-1, left, right);
    }
};
class MinSegmentedTree {
    vector<int> seg;
    vector<int> arr;
    public:
    MinSegmentedTree(vector<int> vec) {
        this -> arr = vec;
        seg.resize(4 * arr.size(), INT_MAX);
        build(0,0,vec.size()-1);
    }
    void build(int ind, int low, int high) {
        if(low == high) {
            seg[ind] = arr[low];
            return;
        }
        int mid = (low+high)/2;
        build(ind*2+1, low, mid);
        build(ind*2+2, mid+1, high);
        seg[ind] = min(seg[ind*2+1], seg[ind*2+2]);
    }
    int queryHelper(int ind, int low, int high, int l, int r) {
        if(l <= low && r >= high) {
            return seg[ind];
        }
        if(high < l || r < low) {
            return INT_MAX;
        }
        int mid = (low + high)/2;
        int left = queryHelper(ind*2+1, low, mid, l, r);
        int right = queryHelper(ind*2+2, mid+1, high, l,r);
        return min(left, right);
    }
    int query(int left, int right) {
        return queryHelper(0, 0, arr.size()-1, left, right);
    }
};
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        MaxSegmentedTree maxiTree(nums);
        MinSegmentedTree miniTree(nums);
        int n = nums.size();
        priority_queue<pair<long long, pair<int,int>>> pq;
        long long maxi = maxiTree.query(0,n-1);
        long long mini = miniTree.query(0, n-1);
        set<pair<int,int>> seen;
        seen.insert({0,n-1});
        pq.push({maxi - mini, {0,n-1}});
        long long ans = 0;
        while( k-- ){
            pair<long long, pair<int,int>> cur = pq.top();
            pq.pop();
            long long val = cur.first;
            long long l = cur.second.first;
            long long r = cur.second.second;
            ans += val;
            if(l + 1 <= r && !seen.count({l+1,r})) {
                pq.push({maxiTree.query(l+1,r) - miniTree.query(l+1,r),{l+1 , r}});
                seen.insert({l+1 , r});
            }
            if(l <= r-1 && !seen.count({l, r-1})) {
                pq.push({maxiTree.query(l , r-1) - miniTree.query(l, r-1), {l,r-1}});
                seen.insert({l, r-1});
            }
        }
        return ans;

    }
};