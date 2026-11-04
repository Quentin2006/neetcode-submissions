class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:



        k = len(nums)

        l, r = 0, k-1

        while l <= r:
            if nums[l] == val:
                nums[l], nums[r] = nums[r], nums[l]
                r -= 1
                k -= 1
            else:
                l += 1

        return k
            
