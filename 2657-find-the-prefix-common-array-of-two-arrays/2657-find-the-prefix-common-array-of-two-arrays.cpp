class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        map<int,int> mpp;
        vector<int> ansvec;
        int ans = 0;
        for(int i = 0; i < A.size(); i++) {
            mpp[A[i]]++;
            mpp[B[i]]++;
            if(A[i] == B[i]) {
                ans++;
            }
            else if(mpp[A[i]] == 2 && mpp[B[i]] == 2) {
                ans += 2;
            }
            else if(mpp[A[i]] == 2) {
                ans++;
            }
            else if(mpp[B[i]] == 2) {
                ans++;
            }
            ansvec.push_back(ans);
        }
        return ansvec;
    }
};