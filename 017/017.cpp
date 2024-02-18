class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        map<char, vector<int>> letters = {
            {'2', {'a', 'b', 'c'}},
            {'3', {'d', 'e', 'f'}},
            {'4', {'g', 'h', 'i'}},
            {'5', {'j', 'k', 'l'}},
            {'6', {'m', 'n', 'o'}},
            {'7', {'p', 'q', 'r', 's'}},
            {'8', {'t', 'u', 'v'}},
            {'9', {'w', 'x', 'y', 'z'}}};

        int n = digits.length();
        vector<string> result;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                for (int l = 0; l < letters[digits[i]].size(); l++)
                {
                    string letter;
                    letter += letters[digits[i]][l];
                    result.push_back(letter);
                }
            }
            else
            {
                vector<string> prefixes = result;
                result.clear();
                for (int l = 0; l < letters[digits[i]].size(); l++)
                {
                    for (int p = 0; p < prefixes.size(); p++)
                    {
                        result.push_back(prefixes[p] + char(letters[digits[i]][l]));
                    }
                }
            }
        }

        return result;
    }
};