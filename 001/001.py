class Solution:
    def twoSum(self, nums, target: int):

        ## Input:
        # nums: List[int], target: int
        ## Output:
        # List[int]

        index = {}
        for i in range(len(nums)):
            if (target - nums[i] in index):
                return [index[target - nums[i]], i]
                
            index[nums[i]] = i