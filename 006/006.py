class Solution:
    def convert(self, s, numRows):

        ## Input:
        # s: str, numRows: int
        ## Output:
        # str

        if (numRows == 1):
            return s

        n = len(s)
        x = 2*numRows - 2
        result = ""

        for i in range(0, n, x):
            result += s[i]
        
        p = 1
        q = x - 1
        while (p < q):
            for i in range(p, n, x):
                result += s[i]
                if (i + (q - p) < n):
                    result += s[i + (q - p)]
            p += 1
            q -= 1
        
        for i in range(p, n, x):
            result += s[i]
        
        return result