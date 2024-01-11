class Solution:
    def reverseVowels(self, s: str) -> str:
        i=0
        j=len(s)-1
        d="aeiouAEIOU"
        s=list(s)
        while(i<j):
            if(s[i] in d  and s[j] in d):
                s[i],s[j]=s[j],s[i]
                i+=1
                j-=1
            elif s[i] in d and s[j] not in d:
                j-=1
            else:
                i+=1
        sn=''.join(s)
        return sn       