class Solution:
    def romanToInt(self, s):
        i = len(s) - 1
        n = 0
        while i >= 0:
            if s[i] == "I":
                n += 1
                i -= 1
            elif s[i] == "V":
                if (s[i-1] == "I") and (i-1 >= 0):
                    n += 4
                    i -= 2
                else:
                    n += 5
                    i -= 1
            elif s[i] == "X":
                if (s[i-1] == "I") and (i-1 >= 0):
                    n += 9
                    i -= 2
                else:
                    n += 10
                    i -= 1
            elif s[i] == "L":
                if (s[i-1] == "X") and (i-1 >= 0):
                    n += 40
                    i -= 2
                else:
                    n += 50
                    i -= 1
            elif s[i] == "C":
                if (s[i-1] == "X") and (i-1 >= 0):
                    n += 90
                    i -= 2
                else:
                    n += 100
                    i -= 1
            elif s[i] == "D":
                if (s[i-1] == "C") and (i-1 >= 0):
                    n += 400
                    i -= 2
                else:
                    n += 500
                    i -= 1
            elif s[i] == "M":
                if (s[i-1] == "C") and (i-1 >= 0):
                    n += 900
                    i -= 2
                else:
                    n += 1000
                    i -= 1

        return n