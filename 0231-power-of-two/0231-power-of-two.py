class Solution(object):
    def isPowerOfTwo(self, n):
        st=bin(n)[2:]
        if st.count("1")==1 and n>0:
            return True
        else:
            return False

        