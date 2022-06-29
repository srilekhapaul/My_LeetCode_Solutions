class Solution:
    def reconstructQueue(self, people: List[List[int]]) -> List[List[int]]:
        people.sort(key= lambda x:(-x[0],x[1]))
        res=[]
        for x in people:
            res.insert(x[1],x)
        return res
