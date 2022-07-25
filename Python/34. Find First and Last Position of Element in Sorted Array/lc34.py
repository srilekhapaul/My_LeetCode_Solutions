import bisect as b
class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        lPos=b.bisect_left(nums,target)
        rPos=b.bisect_right(nums,target)        
        return [lPos,rPos-1] if 0<=lPos<len(nums) and nums[lPos]==target else [-1,-1]
