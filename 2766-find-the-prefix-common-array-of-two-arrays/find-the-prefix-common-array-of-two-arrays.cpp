class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size(),res=0;
        vector<int>sol;
        vector<int>cnt(n+1,0);
        for(int i=0;i<n;i++){
            cnt[A[i]]++;
            cnt[B[i]]++;
            if(A[i]==B[i])
                res+=1;
            else if(cnt[A[i]]==2 && cnt[B[i]]==2)
                res+=2;
            else if(cnt[A[i]]==2 || cnt[B[i]]==2)
                res+=1;
            sol.push_back(res);
        }
        return sol;
    }
};