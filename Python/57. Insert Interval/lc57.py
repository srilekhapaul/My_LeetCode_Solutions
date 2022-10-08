import sortedcontainers
class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        res=sortedcontainers.SortedList()
    
        for x in intervals:
            if not max(x[0],newInterval[0])<=min(x[1],newInterval[1]):
                res.add(x)
            else:
                newInterval[0]=  min(x[0],newInterval[0])
                newInterval[1]= max(x[1],newInterval[1])
        res.add(newInterval)
    
        return res
