class Solution:
    def reorderedPowerOf2(self, n: int) -> bool:
        power2List=[pow(2,x) for x in range(31) ]
        pow2StrList=[sorted(str(x)) for x in power2List]
        nStr=sorted(str(n))
        if nStr in pow2StrList:
            return True
        return False
