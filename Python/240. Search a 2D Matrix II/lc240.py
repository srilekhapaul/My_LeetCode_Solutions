import bisect as b
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for i in range(len(matrix)):
            pos=b.bisect_left(matrix[i], target)
            if (pos<len(matrix[i]) and matrix[i][pos]==target):
                return True
        return False
