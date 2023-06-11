class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // convert nums array to set
        set<int> set_nums = VecToSet(nums);

        // operating with set
        // trick : since there is exactly one solution, so check the case of elem == target/2 in the last
        for (int elem : set_nums)
        {
            if ((set_nums.find(target - elem) != set_nums.end()) && (elem != target / 2))
            {
                vector<int> result = FindIndex(nums, elem, target - elem);
                return result;
            }
        }
        vector<int> result = FindIndex(nums, target / 2, target / 2);
        return result;
    }

private:
    // function to change vector to set
    set<int> VecToSet(vector<int> v)
    {
        set<int> s;
        for (int i : v) // iterate through vector
        {
            s.insert(i);
        }
        return s;
    }

    // function for finding index of the two elements
    vector<int> FindIndex(vector<int> v, int elem1, int elem2)
    {
        vector<int> index = {-1, -1};
        int i = 0;
        while (i < v.size())
        {
            if (v[i] == elem1)
            {
                index[0] = i;
                i++;
                while (v[i] != elem2)
                {
                    i++;
                }
                index[1] = i;
                return index;
            }
            else if (v[i] == elem2)
            {
                index[0] = i;
                i++;
                while (v[i] != elem1)
                {
                    i++;
                }
                index[1] = i;
                return index;
            }
            i++;
        }
        return {-1, -1};
    }
};