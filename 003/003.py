class Solution:
    def lengthOfLongestSubstring(self, s):

        ## Input:
        # s: str
        ## Output:
        # int

        repeat = {}
        count = 0
        max_count = 0

        i, j = 0, 0
        while (j < len(s)):
            if (s[j] not in repeat):
                count += 1
                repeat[s[j]] = j
                j += 1
            else:
                index = repeat[s[j]]
                while (i <= index):
                    del repeat[s[i]]
                    i += 1
                repeat[s[j]] = j
                j += 1
                if (count > max_count):
                    max_count = count
                count = j - i 

        if (count > max_count):
            max_count = count               
        
        return max_count