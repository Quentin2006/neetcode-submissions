class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:

        # have 2 pointers,
        # l = current num we are looking at
        # r = num we can swap if nums[l] == val
        l, r = 0, len(nums)

        while (l < r):
            if (nums[l] == val):
                # set r pointer to ensure its not val
                r -= 1
                while (l < r and nums[r]==val):
                    r -= 1
                # perform swap
                nums[l], nums[r] = nums[r], nums[l]
            l += 1

        return r
