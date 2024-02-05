class Solution:
    def longestPalindrome(self, s):

        ## Input:
        # s: str
        ## Output:
        # str

        ## using Manacher's Algorithm
        manacher_str = "#" + "#".join(s) + "#"
        
        n = len(manacher_str)
        LPS = [0] * n

        C = 0
        R = 0
        max_l = 1
        max_s = s[0]
        for i in range(n):
            i_mirror = 2*C - i
            if (i < R):
                LPS[i] = min(LPS[i_mirror], R-i)
            else:
                LPS[i] = 0

            while ((i-LPS[i]-1 >= 0) and (i+LPS[i]+1 < n) and 
                   (manacher_str[i-LPS[i]-1] == manacher_str[i+LPS[i]+1])):
                LPS[i] += 1
            
            # update C and R
            if (i + LPS[i] > R):
                C = i
                R = i + LPS[i]
            
            if (max_l < LPS[i]):
                max_l = LPS[i]
                max_s = manacher_str[i-LPS[i] : i+LPS[i]+1].replace("#", "")
                
        return max_s