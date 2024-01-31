class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        dic={}
        sum=0
        c=0
        for i in nums:
            sum+=i
            rem=sum%k
            if(rem not in dic):
                dic[rem]=1
            else:
                c+=dic[rem]
                dic[rem]+=1
            if (rem==0):
                c+=1
        return c