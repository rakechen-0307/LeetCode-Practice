class Solution:
    def letterCombinations(self, digits):

        ## Input:
        # digits: str
        ## Output:
        # List[str]

        letters = {'2': ['a', 'b', 'c'], '3': ['d', 'e', 'f'], '4': ['g', 'h', 'i'],
                   '5': ['j', 'k', 'l'], '6': ['m', 'n', 'o'], '7': ['p', 'q', 'r', 's'],
                   '8': ['t', 'u', 'v'], '9': ['w', 'x', 'y', 'z']}
        
        n = len(digits) 
        result = []
        for i in range(n):
            if (i == 0):
                for letter in letters[digits[i]]:
                   result.append(letter) 
            else:
                prefixes = result
                result = []
                for letter in letters[digits[i]]:
                    for prefix in prefixes:
                        result.append(prefix + letter)

        return result