class Solution(object):
    def maximumDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        maxi = -1
        for i in range(len(nums) - 1):
            for j in range(i + 1, len(nums)):
                if nums[i] < nums[j]:
                    maxi = max(maxi, nums[j] - nums[i])
        return maxi