class Solution(object):
    def countBits(self, n):
        l=[]
        
        for i in range(0,n+1):
            st=bin(i)[2:]
            s=st.count("1")
            l.append(s)
        return l
            

        