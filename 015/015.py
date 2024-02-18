class Solution:
    def threeSum(self, nums):

        ## Input:
        # nums: List[int]
        ## Output:
        # List[List[int]]

        ### Two Pointer Approach is better than HashMap Approach ###

        n = len(nums)
        result = []
        nums.sort()

        if (nums[n - 1] < 0) or (n < 3):
            return result

        i = 0
        while (i < n):
            if (nums[i] > 0):
                return result

            low, high = i + 1, n - 1
            while (low < high):
                s = nums[i] + nums[low] + nums[high]
                if (s > 0):
                    high -= 1
                elif (s < 0):
                    low += 1
                else:
                    result.append([nums[i], nums[low], nums[high]])

                    num_l, num_h = nums[low], nums[high]
                    while (low < high) and (nums[low] == num_l):
                        low += 1
                    while (low < high) and (nums[high] == num_h):
                        high -= 1

            num_i = nums[i]
            while (i < n) and (nums[i] == num_i):
                i += 1

        return result