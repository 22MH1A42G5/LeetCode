class Solution {
public:
    bool canChange(string st, string tar) {
        int n = st.size(), j = 0;
        for(int i = 0; i < n; ++i) {
            if(st[i] == '_')
                continue;
            for( ; j < n && tar[j] == '_'; ++j);
            if(j == n || st[i] != tar[j])
                return 0;
            if(st[i] == 'L' && i < j)
                return 0;
            if(st[i] == 'R' && i > j)
                return 0;
            ++j;
        }
        for( ; j < n && tar[j] == '_'; ++j);
        if(j < n)
            return 0;
        return 1;
    }
};