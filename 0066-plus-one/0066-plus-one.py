class Solution:
    def plusOne(self, dig: List[int]) -> List[int]:
        l=[]
        s=""
        for i in dig:
            t=str(i)
            s+=t
        n=int(s)
        n=n+1
        st=str(n)
        for i in st:
            ti=int(i)
            l.append(ti)
        return l