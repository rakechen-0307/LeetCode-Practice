class Solution:
    def twoSum(self, nums, target) :

        ''' 
            Input : nums -> List[int], target -> int
            Output : List[int]
            Hint : using set(hash table). Lookup of a set has O(1) time complexity
        ''' 

        # convert nums array to set
        set_nums = set(nums)

        # operating with set
        # trick : since there is exactly one solution, so check the case of elem == target/2 in the last
        for elem in set_nums :
            if ((target - elem in set_nums) and (elem != target/2)) :
                [num1, num2] = self.Find_Index(nums, elem, target-elem)
                return [num1, num2]
        
        [num1, num2] = self.Find_Index(nums, target/2, target/2)
        return [num1, num2]

    # function for finding index of the two elements
    def Find_Index(self, arr, elem1, elem2) :
        i = 0
        while i < len(arr) :
            if (arr[i] == elem1) :
                num1 = i
                i += 1
                while (arr[i] != elem2) :
                    i += 1
                num2 = i
                return [num1, num2]
            elif (arr[i] == elem2) :
                num1 = i
                i += 1
                while (arr[i] != elem1) :
                    i += 1
                num2 = i
                return [num1, num2]
            i += 1
        return 0