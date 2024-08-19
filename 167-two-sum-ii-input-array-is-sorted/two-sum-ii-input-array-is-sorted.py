class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        i=0
        j=len(nums)-1
        l=[]
        while(i<j):
            s=nums[i]+nums[j]
            if s==target:
                l.append(i+1)
                l.append(j+1)
                return l
            if s>target:
                j-=1
            else:
                i+=1
        