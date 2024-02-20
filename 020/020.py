class Solution:
    def isValid(self, s):

        ## Input:
        # s: str
        ## Output:
        # bool

        n = len(s)
        stack = []

        for i in range(n):
            if (s[i] == '(') or (s[i] == '[') or (s[i] == '{'):
                stack.append(s[i])
            elif (s[i] == ')'):
                if (stack == []) or (stack.pop() != '('):
                    return False
            elif (s[i] == ']'):
                if (stack == []) or (stack.pop() != '['):
                    return False
            else:
                if (stack == []) or (stack.pop() != '{'):
                    return False
                
        if (len(stack) == 0):
            return True
        else:
            return False