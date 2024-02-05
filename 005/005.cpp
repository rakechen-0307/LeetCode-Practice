class Solution
{
public:
    string longestPalindrome(string s)
    {
        // use Manacher's Algorithm
        char manacher_char = '#';
        string manacher_str;
        manacher_str = manacher_char;
        for (int i = 0; i < s.length(); i++)
        {
            manacher_str += s[i];
            manacher_str += manacher_char;
        }

        int n = manacher_str.length();
        int *LPS = new int[n]{0};

        int C = 0;
        int R = 0;
        int max_l = 1;
        string max_s;
        max_s = s[0];
        for (int i = 0; i < n; i++)
        {
            int i_mirror = 2 * C - i;
            if (i < R)
            {
                LPS[i] = min(LPS[i_mirror], R - i);
            }
            else
            {
                LPS[i] = 0;
            }

            while ((i - LPS[i] - 1 >= 0) && (i + LPS[i] + 1 < n) &&
                   (manacher_str[i - LPS[i] - 1] == manacher_str[i + LPS[i] + 1]))
            {
                LPS[i]++;
            }

            // update C and R
            if (i + LPS[i] > R)
            {
                C = i;
                R = i + LPS[i];
            }

            if (max_l < LPS[i])
            {
                max_l = LPS[i];
                max_s = "";
                for (int j = i - LPS[i]; j <= i + LPS[i]; j++)
                {
                    if (manacher_str[j] != manacher_char)
                    {
                        max_s += manacher_str[j];
                    }
                }
            }
        }

        return max_s;
    }
};