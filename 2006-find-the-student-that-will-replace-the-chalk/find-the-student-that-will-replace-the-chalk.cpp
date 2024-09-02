class Solution {
public:
    int chalkReplacer(vector<int>& ch, int k) {
        long long sum = 0;
        for(int i = 0 ; i < ch.size() ; i++)
            sum += ch[i];
        k %= sum;
        int pos = 0;
        for(int i = 0 ; i < ch.size() ; i++) {
            if(k < ch[i])
                return pos;
            ++pos;
            k -= ch[i];
        }
        return -1;
    }
};