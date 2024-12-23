#define ll long long
class Solution {
public:
    bool possible(vector<int>vec , int mid,int k,int m){
        int cnt = 0,bq = 0;
        for(int i = 0 ; i < vec.size() ; i++){
            cnt = 0;
            // int fl = 0;
            while(i < vec.size() && vec[i] <= mid){
                i++;
                cnt++;
                // fl = 1;
            }
            // if(fl == 1)
            // i--;
            bq += cnt/k;
        }
        return bq >= m;
    }
    int minDays(vector<int>& vec, int m, int k) {
        int low = 1 , high = *max_element(vec.begin(),vec.end()),mid;
        if(vec.size() < (ll)m*k)
        return -1;
        while(low <= high){
            mid = (low + high)/2;
            if(possible(vec,mid,k,m)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};