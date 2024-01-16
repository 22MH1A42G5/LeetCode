class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        int k=n;
        while (!nums1.empty() && nums1.back() == 0&&k!=0) {
            nums1.pop_back();
            k-=1;
        }
        
        vector<int>v;
        while(i<nums1.size() && j<n){
            if(nums1[i]<nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else{
                v.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            v.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            v.push_back(nums2[j]);
            j++;
        }
        nums1.clear();
        for(int i=0;i<v.size();i++){
            nums1.push_back(v[i]);
        }
        
    }
};