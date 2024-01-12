class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        l=len(s)
        k=int(l/2)
        f=s[0:k]
        e=s[k:]
        fc=0
        ec=0
        vow="aeiouAEIOU"
        for i in f:
            if i in vow:
                fc+=1
        for i in e:
            if i in vow:
                ec+=1
        if fc==ec:
            return True
        else:
             return False
        