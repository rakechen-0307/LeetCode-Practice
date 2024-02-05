class Solution
{
public:
    int reverse(int x)
    {
        bool isNegative = false;
        if (x < 0)
        {
            isNegative = true;
        }

        long y = abs(x);
        long rev_y = 0;
        while (y >= 1)
        {
            rev_y = 10 * rev_y + y % 10;
            if ((isNegative && rev_y > pow(2, 31)) || (!isNegative && rev_y >= pow(2, 31)))
            {
                return 0;
            }
            y /= 10;
        }

        if (isNegative)
        {
            return int(-rev_y);
        }
        else
        {
            return int(rev_y);
        }
    }
};