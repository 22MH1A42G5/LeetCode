class Solution {
public:
    int findMaxK(vector<int>& a) {
        unordered_set<int> neg;
        int ret=-1;
        for(auto &i:a){
            neg.insert(i);
            if(neg.find(-i)!=neg.end())
            ret=max(ret,abs(i));
        }
        return ret;
    }
};