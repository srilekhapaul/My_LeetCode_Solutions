class Solution:
    def minPartitions(self, n: str) -> int:
        max_ele=max(n)
        return ord(max_ele)-ord('0')
