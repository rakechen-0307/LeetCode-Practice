class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {

        /* Two Pointer Approach is better than HashMap Approach */

        int n = nums.size();
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        if (nums[n - 1] < 0 || n < 3)
        {
            return result;
        }

        int i = 0;
        while (i < n)
        {
            if (nums[i] > 0)
            {
                return result;
            }
            int low = i + 1;
            int high = n - 1;
            while (low < high)
            {
                int s = nums[i] + nums[low] + nums[high];
                if (s > 0)
                {
                    high--;
                }
                else if (s < 0)
                {
                    low++;
                }
                else
                {
                    vector<int> triplet = {nums[i], nums[low], nums[high]};
                    result.push_back(triplet);

                    int num_l = nums[low];
                    int num_h = nums[high];
                    while ((low < high) && (nums[low] == num_l))
                    {
                        low++;
                    }
                    while ((low < high) && (nums[high] == num_h))
                    {
                        high--;
                    }
                }
            }

            int num_i = nums[i];
            while ((i < n) && (nums[i] == num_i))
            {
                i++;
            }
        }

        return result;
    }
};