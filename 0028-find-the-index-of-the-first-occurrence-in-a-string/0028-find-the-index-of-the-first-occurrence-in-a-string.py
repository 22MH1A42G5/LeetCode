class Solution:
    def strStr(self, s: str, t: str) -> int:
        fl=0
        l=len(t)
        i=0
        j=len(t)-1
        while(j<len(s)):
            if s[i:j+1]==t:
                return i
                fl=1
                break
            else:
                i+=1
                j+=1
        if fl==0 :
            return -1
        
        