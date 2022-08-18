from collections import Counter
class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        c=Counter(arr)
        c_sorted=sorted(c.values(), reverse=True)
        cnt,i=0,0
        while(i<len(c_sorted) and cnt<len(arr)/2):
            cnt+=c_sorted[i]
            i+=1
        return i
