class Solution:
    def isPalindrome(self, x) :

        ''' 
            Input : x -> int
            Output : bool
            Hint : Don't convert to string!
        ''' 

        # if x is negative or if its unit digit is 0, it can't be palindrome
        if ((x < 0) or ((x != 0) and (x % 10 == 0))) :
            return False

        # generate rev, which is the reverse of half of x
        rev = 0
        while (rev < x) :
            rev = (rev * 10) + (x % 10)
            x = math.floor(x/10)
        
        return (rev == x or math.floor(rev / 10) == x)