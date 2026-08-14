class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxprofit=0
        minprice=float('inf')
        
        for i in range(len(prices)):
            minprice=min(minprice,prices[i])
            profit=prices[i]-minprice
            maxprofit=max(profit,maxprofit)
        return maxprofit            
        