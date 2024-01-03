class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        map<char, int> repeat;
        int count = 0;
        int max_count = 0;

        int i = 0;
        int j = 0;
        while (j < s.length())
        {
            if (repeat.find(s[j]) == repeat.end())
            {
                count++;
                repeat[s[j]] = j;
                j++;
            }
            else
            {
                int index = repeat[s[j]];
                while (i <= index)
                {
                    repeat.erase(s[i]);
                    i++;
                }
                repeat[s[j]] = j;
                j++;
                if (count > max_count)
                {
                    max_count = count;
                }
                count = j - i;
            }
        }

        if (count > max_count)
        {
            max_count = count;
        }

        return max_count;
    }
};