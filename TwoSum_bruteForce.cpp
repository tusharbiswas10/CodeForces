class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # Brute force solution , O(N^2) -> time complexity
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                val=nums[i]+nums[j]
                if val==target:
                    return [i,j]
