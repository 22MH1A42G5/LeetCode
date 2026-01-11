class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0 , high = nums.size()-1;
        while(low < high){
            int mid = (low + high) / 2;

            if(nums[high] < nums[mid]){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return nums[low];
    }
};

// [3,4,5,1,2]
//  L   M   H
// 

// [11,13,15,17]
//  LH  

// [3 , 1 , 2]
//  LH   M   H