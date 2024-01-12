class Solution:
    def maxArea(self, nums: List[int]) -> int:
        i=0
        maxi=0
        j=len(nums)-1
        while(i<j):
            if maxi<min(nums[i],nums[j])*(j-i):
                maxi=min(nums[i],nums[j])*(j-i)
            if nums[i]<nums[j]:
                i+=1
            else:
                j-=1
        return maxi
