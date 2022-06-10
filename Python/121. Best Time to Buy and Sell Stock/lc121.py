class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l=0
        maxP=0
        for r,e in enumerate(prices):
            if(e<=prices[l]):
                l=r
            elif e>=maxP:
                maxP=max(maxP,e-prices[l])
        return maxP
