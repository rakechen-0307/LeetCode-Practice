class Solution
{
public:
    int myAtoi(string s)
    {
        int n = s.length();
        int i = 0;
        while (i < n && s[i] == ' ')
        {
            i++;
        }

        if (i == n || !((s[i] >= '0' && s[i] <= '9') || s[i] == '+' || s[i] == '-'))
        {
            return 0;
        }

        bool isNegative = false;
        if (s[i] == '+' || s[i] == '-')
        {
            if (s[i] == '-')
            {
                isNegative = true;
            }
            i++;
            if (i == n)
            {
                return 0;
            }
        }

        long result = 0;
        while (i < n && s[i] >= '0' && s[i] <= '9')
        {
            result = 10 * result + (s[i] - '0');
            if (isNegative && result > pow(2, 31))
            {
                return pow(2, 31);
            }
            else if (!isNegative && result >= pow(2, 31))
            {
                return pow(2, 31) - 1;
            }
            i++;
        }

        if (isNegative)
        {
            return int(-result);
        }
        else
        {
            return int(result);
        }
    }
};