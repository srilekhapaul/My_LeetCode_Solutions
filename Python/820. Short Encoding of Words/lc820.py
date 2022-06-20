class Solution:
    def minimumLengthEncoding(self, words: List[str]) -> int:
        words.sort(key=len, reverse=True)
        indices=[]
        refStr=""
        for i,w in enumerate(words):
            if(i==0):
                indices.append(0)
                refStr=refStr+w+"#"              
            else:
                w1=w+"#"
                if(w1 in refStr):
                    id=refStr.find(w1)
                    indices.append(id)                
                else:                    
                    indices.append(len(refStr)) 
                    refStr=refStr+w+"#"                                
        return len(refStr)        
