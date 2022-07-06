class Solution:
    def fib(self, n: int) -> int:
        table=[-1]*(n+1)
        for i in range(n+1):            
            if i==0:
                table[i]=0
            elif i==1:
                table[i]=1
            else:
                table[i]=table[i-1]+table[i-2]
        return table[n]
