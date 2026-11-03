class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        # use 2 pointers

        l, r = 0, 1
        n = len(nums)

        # while r is in bounds
        while r < n:
            if nums[l] == nums[r]:
                nums.pop(r)
                n -= 1
            else:
                l += 1
                r += 1

        return n
