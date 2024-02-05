class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
        {
            return s;
        }

        int n = s.length();
        int x = 2 * numRows - 2;
        string result;

        for (int i = 0; i < n; i += x)
        {
            result += s[i];
        }

        int p = 1;
        int q = x - 1;
        while (p < q)
        {
            for (int i = p; i < n; i += x)
            {
                result += s[i];
                if (i + (q - p) < n)
                {
                    result += s[i + (q - p)];
                }
            }
            p++;
            q--;
        }

        for (int i = p; i < n; i += x)
        {
            result += s[i];
        }

        return result;
    }
};