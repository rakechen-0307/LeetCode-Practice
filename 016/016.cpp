class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int n = nums.size();
        int result = 99999999;
        int diff = abs(result - target);
        sort(nums.begin(), nums.end());

        int i = 0;
        while (i < n - 2)
        {
            if ((nums[i] + nums[i + 1] + nums[i + 2]) - target >= diff)
            {
                return result;
            }
            if (target - (nums[i] + nums[n - 1] + nums[n - 2]) >= diff)
            {
                continue;
            }

            int low = i + 1;
            int high = n - 1;
            while (low < high)
            {
                int s = nums[i] + nums[low] + nums[high];
                if (s == target)
                {
                    return s;
                }
                else if (abs(s - target) < diff)
                {
                    result = s;
                    diff = abs(s - target);
                }

                int num_l = nums[low];
                int num_h = nums[high];
                if (s < target)
                {
                    while ((low < high) && (nums[low] == num_l))
                    {
                        low++;
                    }
                }
                else
                {
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