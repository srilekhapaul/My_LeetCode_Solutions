from queue import PriorityQueue
class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        pq=PriorityQueue()
        for stone in stones:
            pq.put(-1*stone)
        while pq.qsize()>1:
            x=pq.get()
            y=pq.get()
            if x!=y:
                pq.put(-1*abs(x-y))
        if not pq.empty():
            return -1*pq.get()
        return 0
