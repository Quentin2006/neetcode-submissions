class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        # map int: count
        numsCount = {}

        for num in nums:
            if numsCount.get(num):
                numsCount[num] += 1
            else:
                numsCount[num] = 1

        majorityNum = -1
        majorityCount= -1
        for num, count in numsCount.items():
            if majorityCount < count:
                majorityNum = num
                majorityCount = count

        return majorityNum