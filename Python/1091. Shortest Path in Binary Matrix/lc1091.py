from queue import Queue
class Solution:
    def shortestPathBinaryMatrix(self, grid: List[List[int]]) -> int:
        n=len(grid)        
        if(grid[0][0] or grid[n-1][n-1]) :
            return -1
        q=Queue()
        q.put([0,0,1])        
        while not q.empty():
            u=q.get()
            u1, u2, pathLen=u[0], u[1],u[2]
            if(u1==n-1 and u2==n-1):
                return pathLen   
            grid[u1][u2]=1
            for i,j in ((u1+1, u2-1),(u1+1, u2), (u1+1, u2+1), (u1-1, u2-1),(u1-1, u2),(u1-1, u2+1),(u1, u2-1), (u1, u2+1)):
                if (i>=0 and i<=n-1 and j>=0 and j<=n-1 and grid[i][j]==0):
                    grid[i][j]=1
                    q.put([i,j,pathLen+1])
        return -1;
