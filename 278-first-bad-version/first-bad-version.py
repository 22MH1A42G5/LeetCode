# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        s=1
        e=n
        while(s<=e):
            m=(s+e)//2
            k=isBadVersion(m)
            p=isBadVersion(m-1)
            if(k==True and p==False):
                return m
            elif k==False:
                s=m+1
            else:
                e=m-1
        