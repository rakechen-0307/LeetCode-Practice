class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result = {-1, -1};
        map<int, int> index;
        for (int i = 0; i < nums.size(); i++)
        {
            if (index.find(target - nums[i]) != index.end())
            {
                result[0] = index[target - nums[i]];
                result[1] = i;
                break;
            }

            index[nums[i]] = i;
        }
        return result;
    }
};