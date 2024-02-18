class Solution:
    def threeSumClosest(self, nums, target):

        ## Input:
        # nums: List[int], target: int
        ## Output:
        # int

        n = len(nums)
        nums.sort()
        result = 99999999
        diff = abs(result - target)

        i = 0
        while (i < n-2):
            if ((nums[i] + nums[i+1] + nums[i+2]) - target >= diff):
                return result
            if (target - (nums[i] + nums[n-1] + nums[n-2]) >= diff):
                i += 1
                continue

            low, high = i + 1, n - 1
            while (low < high):
                s = nums[i] + nums[low] + nums[high]
                if (s == target):
                    return s
                elif (abs(s - target) < diff):
                    result = s
                    diff = abs(s - target)

                num_l, num_h = nums[low], nums[high]
                if (s < target):
                    while (low < high) and (nums[low] == num_l):
                        low += 1
                else:
                    while (low < high) and (nums[high] == num_h):
                        high -= 1
            
            num_i = nums[i]
            while (i < n-2) and (nums[i] == num_i):
                i += 1

        return result