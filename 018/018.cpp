class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        if (n < 4)
        {
            return result;
        }

        int i = 0;
        while (i < n - 3)
        {
            int j = i + 1;
            while (j < n - 2)
            {
                int low = j + 1;
                int high = n - 1;
                while (low < high)
                {
                    long s = long(nums[i]) + long(nums[j]) + long(nums[low]) + long(nums[high]);
                    if (s > target)
                    {
                        high--;
                    }
                    else if (s < target)
                    {
                        low++;
                    }
                    else
                    {
                        vector<int> quadruplet = {nums[i], nums[j], nums[low], nums[high]};
                        result.push_back(quadruplet);

                        int num_l = nums[low];
                        int num_h = nums[high];
                        while (low < high && nums[low] == num_l)
                        {
                            low++;
                        }
                        while (low < high && nums[high] == num_h)
                        {
                            high--;
                        }
                    }
                }

                int num_j = nums[j];
                while (j < n - 2 && nums[j] == num_j)
                {
                    j++;
                }
            }

            int num_i = nums[i];
            while (i < n - 3 && nums[i] == num_i)
            {
                i++;
            }
        }

        return result;
    }
};