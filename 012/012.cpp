class Solution
{
public:
    string intToRoman(int num)
    {
        string rom;
        rom = "";
        if (num >= 1000)
        {
            int t = num / 1000;
            for (int i = 0; i < t; i++)
            {
                rom += 'M';
            }
            num -= 1000 * t;
        }
        if (num >= 900)
        {
            rom += "CM";
            num -= 900;
        }
        if (num >= 500)
        {
            rom += 'D';
            num -= 500;
        }
        if (num >= 400)
        {
            rom += "CD";
            num -= 400;
        }
        if (num >= 100)
        {
            int t = num / 100;
            for (int i = 0; i < t; i++)
            {
                rom += 'C';
            }
            num -= 100 * t;
        }
        if (num >= 90)
        {
            rom += "XC";
            num -= 90;
        }
        if (num >= 50)
        {
            rom += 'L';
            num -= 50;
        }
        if (num >= 40)
        {
            rom += "XL";
            num -= 40;
        }
        if (num >= 10)
        {
            int t = num / 10;
            for (int i = 0; i < t; i++)
            {
                rom += 'X';
            }
            num -= 10 * t;
        }
        if (num == 9)
        {
            rom += "IX";
            num -= 9;
        }
        if (num >= 5)
        {
            rom += 'V';
            num -= 5;
        }
        if (num == 4)
        {
            rom += "IV";
            num -= 4;
        }
        if (num >= 1)
        {
            int t = num;
            for (int i = 0; i < t; i++)
            {
                rom += 'I';
            }
            num = 0;
        }

        return rom;
    }
};