class Solution {
public:
    int maxConsecutiveAnswers(string anskey, int k) {
        int n = anskey.size();
        int i = 0 , j = 0;
        int cnt = 0;
        int maxi = 0;
        while(j < n){
            if(anskey[j] == 'F'){
                cnt++;
                // cout << j << " ";
            }
            if(cnt > k){
                while(anskey[i] != 'F'){
                    i++;
                }
                i++;
                cnt--;
            }
            cout << i << " " << j << "\n";
            maxi = max(maxi ,j-i+1 );
            j++;
        }
        // cout << maxi << " ";
        i = 0 , j = 0 , cnt = 0;
        while(j < n){
            if(anskey[j] == 'T'){
                cnt++;
            }
            if(cnt > k){
                while(anskey[i] != 'T'){
                    i++;
                }
                i++;
                cnt--;
            }
            maxi = max(maxi ,j-i+1 );
            j++;
        }
        return maxi;
    }
};