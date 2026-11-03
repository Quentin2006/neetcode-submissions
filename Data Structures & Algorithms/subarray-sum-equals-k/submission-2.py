class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        """
        brute force
        Time: O(n^2)
        Space: inplace

        # start at ith index, and go till n
        # if any part of that sum == k, increment subarraySums
        # go untill i == k
        subarraySums = 0
        for i in range(len(nums)):
            sum = 0
            for j in range(i, len(nums)):
                sum += nums[j]
                if sum == k:
                    subarraySums += 1
                
        return subarraySums
        """

        """
        optimal
        Time: O(n)
        Space: O(n)
        """

        prefixSum = {0 : 1}

        count = 0
        curSum = 0
        for num in nums:
            curSum += num
            # if we have seen the num before, update count
            find = curSum - k
            count += prefixSum.get(find, 0)
            prefixSum[curSum] = 1 + prefixSum.get(curSum,0)

        return count