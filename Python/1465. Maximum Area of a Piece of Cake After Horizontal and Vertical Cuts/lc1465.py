class Solution:
    def maxArea(self, h: int, w: int, horizontalCuts: List[int], verticalCuts: List[int]) -> int:
        maxHdiff,maxVdiff=0,0
        horizontalCuts.sort()
        verticalCuts.sort()
        for i,hc in enumerate(horizontalCuts):
            if(i==0):
                maxHdiff=max(maxHdiff,hc-0) 
            else:
                maxHdiff=max(maxHdiff, hc-horizontalCuts[i-1])
            if(i==len(horizontalCuts)-1):
                maxHdiff=max(maxHdiff,h-hc)  
        for i,vc in enumerate(verticalCuts):
            if(i==0):
                maxVdiff=max(maxVdiff,vc-0) 
            else:
                maxVdiff=max(maxVdiff, vc-verticalCuts[i-1])
            if(i==len(verticalCuts)-1):
                maxVdiff=max(maxVdiff,w-vc)         
        return (maxHdiff*maxVdiff)%1000000007
                
