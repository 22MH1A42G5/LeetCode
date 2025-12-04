class Solution {
public:
    void merge(vector<int>&nums , long long left ,long long mid , long long right, long long& ans){
        long long n1 = mid - left + 1; 
        long long n2 = right - mid;
        vector<int>v1(n1) , v2(n2);
        for(int i = 0 ; i < n1 ; i++){
            v1[i] = nums[left + i];
        }
        for(int i = 0 ; i < n2 ; i++){
            v2[i] = nums[mid + 1 + i];
        }
        long long i = 0 , j = 0 , k = 0;
        // 6 13 21 25       // 1 2 3 4 4 5 9 11 13

        while(i < n1){
            while(j < n2 && v1[i] > ((long long)v2[j]*2LL)){
                j++;
            }
            ans += j;
            i++;
        }
        i = 0 , j = 0;
        vector<int>fin(n1 + n2);
        while(i < n1 && j < n2){
            if(v1[i] > v2[j]){
                fin[k++] = v2[j++];
            }
            else{
                fin[k++] = v1[i++];
            }
        }
        while(i < n1){
            fin[k++] = v1[i++];
        }
        while(j < n2){
            fin[k++] = v2[j++];
        }
        for(int i = left ; i <= right ; i++){
            nums[i] = fin[i-left];
        }
    }

    void mergeSort(vector<int>& nums , long long left , long long right , long long& ans){
        if(left >= right) return;
        long long mid = (left + right) / 2;
        mergeSort(nums , left , mid , ans);
        mergeSort(nums , mid+1 , right , ans);
        merge(nums , left , mid , right , ans);
    }
    int reversePairs(vector<int>& nums) {
        long long ans = 0 , n = nums.size();
        mergeSort( nums , 0 , n-1 , ans);
        for(int i = 0 ; i < nums.size() ; i++){
            cout << nums[i] << " ";
        }
        return ans;
    }
};