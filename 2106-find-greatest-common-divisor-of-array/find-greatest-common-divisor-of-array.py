class Solution(object):
    def findGCD(self, nums):
        a=min(nums)
        b=max(nums)
        while(True):
            if a==0:
                return b
            a,b=b%a,a

        