class Solution:
    def longestCommonPrefix(self, strs):

        ## Input:
        # strs: List[str]
        ## Output:
        # str

        min_strlen = 99999999
        for i in range(len(strs)):
            if (len(strs[i]) < min_strlen):
                min_strlen = len(strs[i])
        
        prefix = ""
        for i in range(min_strlen):
            ch = strs[0][i]
            for j in range(1, len(strs)):
                if (strs[j][i] != ch):
                    return prefix
            prefix += ch
        
        return prefix