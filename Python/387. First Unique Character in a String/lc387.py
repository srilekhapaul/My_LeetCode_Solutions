class Solution:
    def firstUniqChar(self, s: str) -> int:
        charDict=collections.defaultdict()
        for c in s:
            charDict[c]=charDict.get(c,0)+1
        for i,c in enumerate(s):
            if charDict[c]==1:
                return i
        return -1
