class Solution:
    def find(self, nums: List[int], l: int, r: int, target: int) -> int:
        if (l > r):
            return -1

        i = (r-l)//2 + l
        if nums[i] < target:
            return self.find(nums, i+1, r, target)
        elif nums[i] > target:
            return self.find(nums, l, i-1, target)
        else:
            return i
        


    def search(self, nums: List[int], target: int) -> int:
        return (self.find(nums, 0, len(nums)-1, target))