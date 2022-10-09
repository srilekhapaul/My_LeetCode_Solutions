class Solution:
    def isAlienSorted(self, words: List[str], order: str) -> bool:
        orderId={a:i for i,a in enumerate(order)}
        
        for i in range(1,len(words)):
            w1,w2=words[i-1], words[i]
            j=0
            while j<len(w1) and j<len(w2):
                if orderId[w1[j]]>orderId[w2[j]]:
                    return False
                elif orderId[w1[j]]<orderId[w2[j]]:
                    break
                else:
                    j+=1
            if j!=len(w1) and j==len(w2):
                return False
        return True
                    
            
            
            
        
