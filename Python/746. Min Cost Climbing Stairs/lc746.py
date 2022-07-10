class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        table=[-1]*(len(cost)+1)
        for i in range (len(cost)+1):
            if (i==0 or i==1):
                table[i]=0
            else:
                table[i]=min(table[i-1]+cost[i-1], table[i-2]+cost[i-2])
        return table[len(cost)]
