class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:

        # time: O(n+m), n = len(nums), m = len(freq)
        freq = Counter(nums)

        # we can also just do this
        return len(nums) != len(freq)

        for _, value in freq.items():
            if value > 1:
                return True

        return False