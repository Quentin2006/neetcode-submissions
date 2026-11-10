class Solution:
    def majorityElement(self, nums: List[int]) -> int:

        # Space: O(m), where m == unique nums count in nums
        # Time: O(m), where m == unique nums count in nums
        freq = Counter(nums)

        print(freq)

        num, count = 0,0

        for key, val in freq.items():
            print(key, val)
            if count < val:
                num = key
                count = val

        return num