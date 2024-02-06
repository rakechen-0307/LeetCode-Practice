class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 10 && x >= 0)
        {
            return true;
        }

        if (x < 0 or x % 10 == 0)
        {
            return false;
        }

        int rev_x = 0;
        while ((10 * rev_x + x % 10) <= x && x >= 10)
        {
            rev_x = 10 * rev_x + x % 10;
            if (rev_x == x)
            {
                return true;
            }

            x = x / 10;
            if (rev_x == x)
            {
                return true;
            }
        }

        return false;
    }
};