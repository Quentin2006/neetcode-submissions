class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        # keep track of held stock
        # if the current stock is greater than the held stock
        # we can add to max profix cur-held, then set held = cur

        holdIndex = 0
        maxProfit = 0


        for i in range(len(prices)):
            curStock = prices[i]
            heldStock = prices[holdIndex]
            print(curStock, heldStock)
            if curStock > heldStock:
                profit = curStock - heldStock
                maxProfit += profit
            holdIndex = i

        return maxProfit