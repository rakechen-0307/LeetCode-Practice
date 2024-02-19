class Solution:
    def fourSum(self, nums, target):

        ## Input:
        # nums: List[int], target: int
        ## Output:
        # List[List[int]]

        n = len(nums)
        result = []
        nums.sort()

        if (n < 4):
            return result
        
        i = 0
        while (i < n-3):
            j = i + 1
            while (j < n-2):
                low, high = j + 1, n - 1
                while(low < high):
                    s = nums[i] + nums[j] + nums[low] + nums[high]
                    if (s > target):
                        high -= 1
                    elif (s < target):
                        low += 1
                    else:
                        result.append([nums[i], nums[j], nums[low], nums[high]])

                        num_l, num_h = nums[low], nums[high]
                        while (low < high) and (nums[low] == num_l):
                            low += 1
                        while (low < high) and (nums[high] == num_h):
                            high -= 1
                
                num_j = nums[j]
                while (j < n-2) and (nums[j] == num_j):
                    j += 1
            
            num_i = nums[i]
            while (i < n-3) and (nums[i] == num_i):
                i += 1
        
        return result