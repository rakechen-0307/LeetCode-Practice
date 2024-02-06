class Solution:
    def isPalindrome(self, x):

        ## Input:
        # x: int
        ## Output:
        # bool
        
        if (x < 10 and x >= 0):
            return True

        if (x < 0 or x % 10 == 0):
            return False

        rev_x = 0
        while ((10 * rev_x + x % 10) <= x and x >= 10):
            rev_x = 10 * rev_x + x % 10
            if (rev_x == x):
                return True
            
            x = x // 10
            if (rev_x == x):
                return True

        return False