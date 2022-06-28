from collections import defaultdict
class Solution:
    def minDeletions(self, s: str) -> int:
        res=0
        freqDict={}
        for x in s:
            freqDict[x]=freqDict.get(x,0)+1
        newDict=defaultdict(list)
        for k,v in freqDict.items():
            newDict[v].append(k)
        l=[]
        for i in range(len(s)):
            if(newDict.get(i,0)==0):
                l.append(i)
            else:
                while (len(newDict[i])>1):
                    if(len(l)>0):                        
                        res+=(i-max(l))
                        l.remove(max(l))  
                        newDict[i].remove(newDict[i][0])
                    else:
                        res+=i
                        newDict[i].remove(newDict[i][0])                        
        return res
