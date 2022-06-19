class Solution:
    def suggestedProducts(self, products: List[str], searchWord: str) -> List[List[str]]:
        products.sort()
        res=[]        
        for i,c in enumerate(searchWord):
            cnt=0
            res.append([])
            for p in products:                
                if cnt<3 and p.startswith(searchWord[:i+1]):
                    cnt+=1
                    res[i].append(p)
        return res
