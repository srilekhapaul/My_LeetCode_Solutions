class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        rdict,mdict={},{}
        for r in ransomNote:
            rdict[r]=rdict.get(r,0)+1
        for m in magazine:
            mdict[m]=mdict.get(m,0)+1
        for k,v in rdict.items():
            if v>mdict.get(k,0):
                return False
        return True
