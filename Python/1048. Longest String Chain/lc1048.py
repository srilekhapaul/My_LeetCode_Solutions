class Solution:
    def longestStrChain(self, words: List[str]) -> int:
        words.sort(key=len)
        mem={}
        res=0
        for i,s in enumerate(words):
            if(i==0):
                mem[s]=1
            else:
                for i in range(len(s)):
                    c=s[:i]+s[i+1:]
                    mem[s]=max(mem.get(s,1), mem.get(c,0)+1)
            res=max(res,mem.get(s,1))
        return res
