class Solution
{
public:
    int romanToInt(string s)
    {
        int i = s.size() - 1;
        int n = 0;
        while (i >= 0)
        {
            if (s[i] == 'I')
            {
                n += 1;
                i -= 1;
            }
            else if (s[i] == 'V')
            {
                if ((i - 1 >= 0) && (s[i - 1] == 'I'))
                {
                    n += 4;
                    i -= 2;
                }
                else
                {
                    n += 5;
                    i -= 1;
                }
            }
            else if (s[i] == 'X')
            {
                if ((i - 1 >= 0) && (s[i - 1] == 'I'))
                {
                    n += 9;
                    i -= 2;
                }
                else
                {
                    n += 10;
                    i -= 1;
                }
            }
            else if (s[i] == 'L')
            {
                if ((i - 1 >= 0) && (s[i - 1] == 'X'))
                {
                    n += 40;
                    i -= 2;
                }
                else
                {
                    n += 50;
                    i -= 1;
                }
            }
            else if (s[i] == 'C')
            {
                if ((i - 1 >= 0) && (s[i - 1] == 'X'))
                {
                    n += 90;
                    i -= 2;
                }
                else
                {
                    n += 100;
                    i -= 1;
                }
            }
            else if (s[i] == 'D')
            {
                if ((i - 1 >= 0) && (s[i - 1] == 'C'))
                {
                    n += 400;
                    i -= 2;
                }
                else
                {
                    n += 500;
                    i -= 1;
                }
            }
            else if (s[i] == 'M')
            {
                if ((i - 1 >= 0) && (s[i - 1] == 'C'))
                {
                    n += 900;
                    i -= 2;
                }
                else
                {
                    n += 1000;
                    i -= 1;
                }
            }
        }
        return n;
    }
};