class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res=[]
        cnt=0
        for i in range(numRows):
            cnt+=1
            if (i==0):
                res.append([1])
            else:
                subRes=[]
                for c in range(cnt):                   
                    if c==0: 
                        subRes.append(res[i-1][c])
                    elif  c==cnt-1:   
                        subRes.append(res[i-1][len(res[i-1])-1])
                    else:
                        subRes.append(res[i-1][c-1]+res[i-1][c])
                res.append(subRes)
        return res
        
