#!/bin/bash/env python3

class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """

        """
        Input: nums = [3,2,4], target = 6
        Output: [1,2]

        1. Current number + next number = target
            
        """
        for i in range(len(nums)-1):
            for j in range(i+1, len(nums)):
                if nums[i]+nums[j] == target:
                    return [i,j]
        return []

Test = Solution()
print(Test.twoSum([3,2,4], 6))
