from collections import defaultdict
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # populate val_to_index
        # val -> index, defaulting to -1 index
        val_to_index = defaultdict(int)

        for i in range(len(nums)):
            val_to_index[nums[i]] = i

        for i in range(len(nums)):
            find = target - nums[i] 
            # if find is in keys, and the index isnt i, and
            if find in val_to_index.keys() and val_to_index[find] != i:
                # return index of i and j
                j = val_to_index[find]
                print(j)
                return [i, j]