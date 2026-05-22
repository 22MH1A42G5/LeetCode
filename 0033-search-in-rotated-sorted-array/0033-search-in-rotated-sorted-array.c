int search(int* nums, int numsSize, int target){
    int low=0;
    int high=numsSize-1;
    while(low<=high){
        int mid=(low+high) >> 1;
        if(nums[mid]==target) return mid;
        if(nums[mid] < nums[0])
        {
            if(target >= nums[0] || target < nums[mid])
            high=mid-1;
            else{
                low=mid+1;
            }
        }
        else
        {
            if(target<nums[0] || target>nums[mid]){
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    return -1;

}