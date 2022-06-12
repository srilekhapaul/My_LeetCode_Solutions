class Solution:
    def maximumUniqueSubarray(self, nums: List[int]) -> int:
        l=0
        maxWinSum=0
        winSize=0
        winSum=0
        winSet=set()
        for r in range(len(nums)):
            while nums[r] in winSet:
                winSize-=1
                winSet.remove(nums[l])
                winSum-=nums[l]
                l+=1
            winSize+=1  
            winSet.add(nums[r])
            winSum+=nums[r]
            maxWinSum=max(winSum,maxWinSum)
        return maxWinSum
