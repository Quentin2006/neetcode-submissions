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

        """

        # we can use a prefix array
        prefixSums = {0: 1}
        currentSum = 0
        count = 0

        for num in nums:
            currentSum += num
            target = currentSum - k
            if target in prefixSums:
                count += prefixSums[target]

            prefixSums[currentSum] = prefixSums.get(currentSum,0)+1
        
        return count