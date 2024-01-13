class Solution:
    def minSteps(self, s: str, t: str) -> int:
        l=s
        li=t
        for i in range(0,len(l)):
            if l[i] in li:
                li=li.replace(l[i],"",1)
        return len(li)
        