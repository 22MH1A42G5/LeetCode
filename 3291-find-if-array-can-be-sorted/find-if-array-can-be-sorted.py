class Solution:
    def canSortArray(self, nums: List[int]) -> bool:
        l=nums.copy()
        l.sort()
        i=0
        while(i+1<len(nums)):
            s1=bin(nums[i])
            s2=bin(nums[i+1])
            if(nums[i]>nums[i+1]):
                if(s1.count('1')==s2.count('1')):
                    nums[i],nums[i+1]=nums[i+1],nums[i]
                    i=0
                else:
                    return False
            else:
                i+=1
        if l==nums:
            return True
        else:
            return False