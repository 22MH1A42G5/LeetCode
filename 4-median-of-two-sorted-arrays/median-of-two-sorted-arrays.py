class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        nums1.extend(nums2)
        nums1.sort()
        l=len(nums1)
        if(l%2==0):
            n1=float(nums1[(l//2)-1])
            n2=float(nums1[l//2])
            ans=float((n1+n2)/2)
            print(n1)
            print(n2)
        else:
            ans=nums1[(l//2)]
        return ans
        