class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # get count of each num. 
        # modify the list using each count

        zeroCount, oneCount, twoCount = 0, 0, 0

        for num in nums:
            if num == 0:
                zeroCount += 1
            elif num == 1:
                oneCount += 1
            else:
                twoCount += 1

        # now we have the count of each num we can remake nums

        # set 0's
        for i in range(zeroCount):
            nums[i] = 0
        # set 1's
        for i in range(oneCount):
            nums[i+zeroCount] = 1
        # set 2's
        for i in range(twoCount):
            nums[i+zeroCount+oneCount] = 2

        return nums


        