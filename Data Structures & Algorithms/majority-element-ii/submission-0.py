class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        res = []

        # num -> count
        counts = {}

        # map all counts
        for num in nums:
            if num in counts:
                counts[num] += 1
            else:
                counts[num] = 0

        # loop though counts and add to res
        floor = math.floor(len(nums)/3)
        print(floor)

        print(counts)

        for key, value in counts.items():
            if value >= floor:
                res.append(key)

        return res