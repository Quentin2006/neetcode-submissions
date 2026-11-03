class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        freq = Counter(nums)

        for _, value in freq.items():
            if value > 1:
                return True

        return False