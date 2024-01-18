class NumArray:

    def __init__(self, nums: List[int]):
        self.p=[0]
        s=0
        for i in nums:
            s+=i
            self.p.append(s)

    def sumRange(self, left: int, right: int) -> int:
        return self.p[right+1]-self.p[left]
        


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)