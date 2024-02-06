class Solution:
    def maxArea(self, height):

        ## Input:
        # height: List[int]
        ## Output:
        # int

        i = 0
        j = len(height) - 1
        max_area = 0

        while (i < j):
            if (height[i] <= height[j]):
                area = height[i] * (j - i)
                i += 1
            else:
                area = height[j] * (j - i)
                j -= 1
            if (area > max_area):
                max_area = area
        
        return max_area