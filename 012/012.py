class Solution:
    def intToRoman(self, num):

        ## Input:
        # num: int
        ## Output:
        # str

        rom = ""
        if (num >= 1000):
            t = num // 1000
            for i in range(t):
                rom += "M"
            num -= 1000 * t
        if (num >= 900):
            rom += "CM"
            num -= 900
        if (num >= 500):
            rom += "D"
            num -= 500
        if (num >= 400):
            rom += "CD"
            num -= 400
        if (num >= 100):
            t = num // 100
            for i in range(t):
                rom += "C"
            num -= 100 * t
        if (num >= 90):
            rom += "XC"
            num -= 90
        if (num >= 50):
            rom += "L"
            num -= 50
        if (num >= 40):
            rom += "XL"
            num -= 40
        if (num >= 10):
            t = num // 10
            for i in range(t):
                rom += "X"
            num -= 10 * t
        if (num == 9):
            rom += "IX"
            num -= 9
        if (num >= 5):
            rom += "V"
            num -= 5
        if (num == 4):
            rom += "IV"
            num -= 4
        if (num >= 1):
            t = num
            for i in range(t):
                rom += "I"
            num = 0
        
        return rom