class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        miss=len(nums)
        for i in range(len(nums)):
            miss^=i
            miss^=nums[i]
        return miss