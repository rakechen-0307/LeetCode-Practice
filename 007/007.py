class Solution:
    def reverse(self, x):
        
        ## Input:
        # x: int
        ## Output:
        # int

        if (x < 0):
            isNegative = True
        else:
            isNegative = False
        
        x = abs(x)
        rev_x = 0
        while (x >= 1):
           rev_x = 10 * rev_x + x % 10
           if ((isNegative and rev_x > 2 ** 31) or (not isNegative and rev_x >= 2 ** 31)):
               return 0
           x = x // 10
        
        if (isNegative):
            return -rev_x
        else:
            return rev_x      