class Solution:
    def myAtoi(self, s):

        ## Input:
        # s: str
        ## Output:
        # int

        n = len(s)
        i = 0
        while (i < n and s[i] == ' '):
            i += 1

        if (i == n or not ((s[i] >= '0' and s[i] <= '9') or s[i] == '+' or s[i] == '-')):
            return 0
        
        isNegative = False
        if (s[i] == '+' or s[i] == '-'):
            if (s[i] == '-'):
                isNegative = True
            i += 1
            if (i == n):
                return 0
        
        result = 0
        while (i < n and s[i] >= '0' and s[i] <= '9'):
            result = 10 * result + int(s[i])
            if (isNegative and result > 2 ** 31):
                return -(2 ** 31)
            elif (not isNegative and result >= 2 ** 31):
                return 2 ** 31 - 1
            i += 1
        
        if (isNegative):
            return -result
        else:
            return result