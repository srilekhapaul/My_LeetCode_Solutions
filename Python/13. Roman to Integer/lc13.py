class Solution:
    def romanToInt(self, s: str) -> int:
        RomanDict={'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000 }
        res=0
        for i in range(len(s)-1, -1,-1):
            if(i<len(s)-1 and RomanDict[s[i+1]]>RomanDict[s[i]]):
                res-=RomanDict[s[i]]
                continue
            res+=RomanDict[s[i]]
        return res
        
