class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int min_strlen = 99999999;
        for (int i = 0; i < strs.size(); i++)
        {
            if (strs[i].length() < min_strlen)
            {
                min_strlen = strs[i].length();
            }
        }

        string prefix;
        prefix = "";
        for (int i = 0; i < min_strlen; i++)
        {
            char ch = strs[0][i];
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[j][i] != ch)
                {
                    return prefix;
                }
            }
            prefix += ch;
        }

        return prefix;
    }
};