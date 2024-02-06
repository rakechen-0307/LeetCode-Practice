class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0;
        int j = height.size() - 1;
        int max_area = 0;
        int area;

        while (i < j)
        {
            if (height[i] <= height[j])
            {
                area = height[i] * (j - i);
                i++;
            }
            else
            {
                area = height[j] * (j - i);
                j--;
            }

            if (area > max_area)
            {
                max_area = area;
            }
        }

        return max_area;
    }
};