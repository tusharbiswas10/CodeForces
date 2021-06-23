class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        mapz=dict()
        for i in range(len(nums)):
            temp=nums[i]
            store=target-temp
            if temp in mapz:
                return [mapz[temp],i]
            else:
                mapz[store]=i
            #O(N)
